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
    //vrchol, norm�la, uv sou�adnice
    1.0f, 0.0f, 1.0f,   0.0f, 1.0f, 0.0f,   0.0f, 0.0f,
    1.0f, 0.0f,-1.0f,   0.0f, 1.0f, 0.0f,   1.0f, 0.0f,
   -1.0f, 0.0f,-1.0f,   0.0f, 1.0f, 0.0f,   1.0f, 1.0f,

   -1.0f, 0.0f, 1.0f,   0.0f, 1.0f, 0.0f,   0.0f, 1.0f,
    1.0f, 0.0f, 1.0f,   0.0f, 1.0f, 0.0f,   0.0f, 0.0f,
   -1.0f, 0.0f,-1.0f,   0.0f, 1.0f, 0.0f,   1.0f, 1.0f
};

/*const std::vector<float> plain = {
    //vrchol, norm�la, uv sou�adnice
    1.0f, 0.0f, 1.0f,   0.0f, 1.0f, 0.0f,   0.0f, 0.0f,
    1.0f, 0.0f,-1.0f,   0.0f, 1.0f, 0.0f,   30.0f, 0.0f,
   -1.0f, 0.0f,-1.0f,   0.0f, 1.0f, 0.0f,   30.0f, 30.0f,

   -1.0f, 0.0f, 1.0f,   0.0f, 1.0f, 0.0f,   0.0f, 30.0f,
    1.0f, 0.0f, 1.0f,   0.0f, 1.0f, 0.0f,   0.0f, 0.0f,
   -1.0f, 0.0f,-1.0f,   0.0f, 1.0f, 0.0f,   30.0f, 30.0f
};*/