CImg<unsigned char> img("image.png");              // image name
const unsigned char valR = img(10,10,0,0);        // red
const unsigned char valG = img(10,10,0,1);        //green
const unsigned char valB = img(10,10,2);          // blue
const unsigned char avg = (valR + valG + valB)/3; // values
img(10,10,0) = img(10,10,1) = img(10,10,2) = avg; //gray and render
CImgDisplay main_disp(img, "Image");      // displays
img.save("image.png");        
