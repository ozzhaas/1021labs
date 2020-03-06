#include "Pixel.h"
#include "header.h"


using namespace std;


int main () {


    ofstream output;
    output.open("color.ppm");
    if ((checkFile(output)) == false) {
        cout << "Error opening output image." << endl;
    }
    else {


        Header head;
        head.setWidth(640);
        head.setHeight(480);

        float redPix[head.getHeight()][head.getWidth()];
        float greenPix[head.getHeight()][head.getWidth()];
        float bluePix[head.getHeight()][head.getWidth()];

        Pixel **pix = new Pixel*[head.getHeight()];
        for (int a = 0; a < head.getHeight(); a++) {
            pix[a] = new Pixel[head.getWidth()];
        }


        head.writeHeader(output);


        int tid;
        int ncores;

        /*Figure out how many threads we have available*/
        #pragma omp parallel private(tid)
        {
            if ((tid = omp_get_thread_num()) == 0)
                ncores = omp_get_num_threads();
        }
        output << stderr << "Num Cores: " << ncores << endl;


        /*Calculate chunk, splitting up work as evenly as possible*/
        cout << ncores << " " << head.getHeight() << endl;
        int chunk = ((head.getHeight())/ncores);
        output << stderr << "Height: " << head.getHeight() << endl;
        output << stderr << "Chunk: " << "( " << head.getHeight() << "/" << ncores << "): " << chunk << endl;

        #pragma omp parallel \
                shared(w, h, redPix, greenPix, bluePix) \
                private(tid)

        #pragma omp for schedule(static, chunk) nowait


        for (int i = 0; i < head.getHeight(); i++) {
            for (int j = head.getWidth(); j >= 0; j--) {

                tid = omp_get_thread_num();

                if (i < head.getHeight()/8){
                    pix[i][j].setR((unsigned char)(0.0 * 255));
                    pix[i][j].setG((unsigned char)(0.0 * 255));
                    pix[i][j].setB((unsigned char)(1.0 * 255));
                }
                else if (i < ((head.getHeight()/8) * 2)) {
                    pix[i][j].setR((unsigned char)(1.0 * 255));
                    pix[i][j].setG((unsigned char)(0.0 * 255));
                    pix[i][j].setB((unsigned char)(0.0 * 255));
                }
                else if (i < ((head.getHeight()/8) * 3)){
                    pix[i][j].setR((unsigned char)(0.0 * 255));
                    pix[i][j].setG((unsigned char)(1.0 * 255));
                    pix[i][j].setB((unsigned char)(0.0 * 255));
                }
                else if (i < ((head.getHeight()/8) * 4)) {
                    pix[i][j].setR((unsigned char)(0.5 * 255));
                    pix[i][j].setG((unsigned char)(0.0 * 255));
                    pix[i][j].setB((unsigned char)(0.5 * 255));
                }
                else if (i < ((head.getHeight()/8) * 5)) {
                    pix[i][j].setR((unsigned char)(0.25 * 255));
                    pix[i][j].setG((unsigned char)(0.25 * 255));
                    pix[i][j].setB((unsigned char)(0.25 * 255));
                }
                else if (i < ((head.getHeight()/8) * 6)) {
                    pix[i][j].setR((unsigned char)(0.75 * 255));
                    pix[i][j].setG((unsigned char)(0.75 * 255));
                    pix[i][j].setB((unsigned char)(0.75 * 255));
                }
                else if (i < ((head.getHeight()/8) * 7)) {
                    pix[i][j].setR((unsigned char)(206));
                    pix[i][j].setG((unsigned char)(43));
                    pix[i][j].setB((unsigned char)(55));
                }
                else {
                    pix[i][j].setR((unsigned char)(0));
                    pix[i][j].setG((unsigned char)(146));
                    pix[i][j].setB((unsigned char)(70));
                }
            }
        }
        for (int x = 0; x < head.getHeight(); x++) {
            for (int y = 0; y < head.getWidth(); y++) {
                pix[x][y].writePixel(output);
            }
        }

    }

    return 0;
}
