// Copyright 2020 Golovanova Elena

#include <include/algorithm_huffmana_app.h>

#include <iostream>
#include <string>

int main(int argc, const char** argv) {
  AlgorithmHuffmanaApp app;
  std::string output = app(argc, argv);
  std::cout << output;
return 0;
}
