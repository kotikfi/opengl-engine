//6
//glDrawArrays(GL_TRIANGLES, 0, 6);

//const std::vector<float> plain = {
//    1.0f, 0.0f,  1.0f, 0.0f, 1.0f, 0.0f,
//    1.0f, 0.0f, -1.0f, 0.0f, 1.0f, 0.0f,
//   -1.0f, 0.0f, -1.0f, 0.0f, 1.0f, 0.0f,
//
//   -1.0f, 0.0f,  1.0f, 0.0f, 1.0f, 0.0f,
//    1.0f, 0.0f,  1.0f, 0.0f, 1.0f, 0.0f,
//   -1.0f, 0.0f, -1.0f, 0.0f, 1.0f, 0.0f
//
//};

const std::vector<float> plain = {
    //vrchol, normála, uv souøadnice
    1.0f, 0.0f, 1.0f,   0.0f, 1.0f, 0.0f,   0.0f, 0.0f,
    1.0f, 0.0f,-1.0f,   0.0f, 1.0f, 0.0f,   1.0f, 0.0f,
   -1.0f, 0.0f,-1.0f,   0.0f, 1.0f, 0.0f,   1.0f, 1.0f,

   -1.0f, 0.0f, 1.0f,   0.0f, 1.0f, 0.0f,   0.0f, 1.0f,
    1.0f, 0.0f, 1.0f,   0.0f, 1.0f, 0.0f,   0.0f, 0.0f,
   -1.0f, 0.0f,-1.0f,   0.0f, 1.0f, 0.0f,   1.0f, 1.0f
};

/*const std::vector<float> plain = {
    //vrchol, normála, uv souøadnice
    1.0f, 0.0f, 1.0f,   0.0f, 1.0f, 0.0f,   0.0f, 0.0f,
    1.0f, 0.0f,-1.0f,   0.0f, 1.0f, 0.0f,   30.0f, 0.0f,
   -1.0f, 0.0f,-1.0f,   0.0f, 1.0f, 0.0f,   30.0f, 30.0f,

   -1.0f, 0.0f, 1.0f,   0.0f, 1.0f, 0.0f,   0.0f, 30.0f,
    1.0f, 0.0f, 1.0f,   0.0f, 1.0f, 0.0f,   0.0f, 0.0f,
   -1.0f, 0.0f,-1.0f,   0.0f, 1.0f, 0.0f,   30.0f, 30.0f
};*/