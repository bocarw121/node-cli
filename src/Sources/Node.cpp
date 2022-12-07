#include "../Headers/Node.h"
#include "../Headers/Express.h"

Node::Node(){};

Node::~Node(){};

void Node::build_express()
{
  Express express;

  express.create_folders();
  express.install_packages();
};
