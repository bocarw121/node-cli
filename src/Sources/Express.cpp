#include "../../data/express.h"
#include "../Headers/Express.h"

void Express::create_folders()
{
  filesystem::path path{"./"};
  path = "app.js";

  filesystem::create_directories("./src");

  filesystem::create_directories("./src/routes");

  filesystem::create_directories("./src/models");

  std::ofstream ofs(path);

  ofs << app;
  ofs.close();
}

void Express::install_packages()
{

  system("npm init -y && npm i express nodemon");
  system("npm pkg delete scripts.test");
  system("npm pkg set 'type=module'");
  system("npm pkg set 'scripts.start=node app.js'");
  system("npm pkg set 'scripts.dev=nodemon app.js'");
};
