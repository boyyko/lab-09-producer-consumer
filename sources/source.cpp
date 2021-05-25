// Copyright 2020 Your Name <your_email>

#include <parametrs.hpp>
#include "produce.hpp"
#include "pars.hpp"

void launch(int argc, char* argv[]) {
  prepare_command_line(argc, argv);
  printParametrs();
  downloader d(parametrs.downloader_threads);
  Parser p(parametrs.parser_threads);
  d.downloading(parametrs.url, parametrs.depth, p);
}