#include <iostream>
#include "../Headers/Node.h"

int main(int argc, char const *argv[], char *envp[])
{
  Node node;

  //  std::cout << argv[i] << "\n";
  for (int i = 0; i < argc; i++)
  {
    std::string arg = argv[i];

    if (arg == "--help" || arg == "-h")
    {
      printf("Usage: node <COMMAND> \n");
      printf("");
      printf("Commands: ");
      printf("`-e or --express` - Bootstraps an express app \n");

      return 0;
    };

    if (arg == "--express" || arg == "-e")
    {
      node.build_express();
      return 0;
    };
  }
  return 0;
}
