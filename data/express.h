#include <iostream>

using namespace std;
// multiline string with
string app = "import express  from 'express'\n\nconst app = express()\nconst port = 8000\n\napp.get('/', (req, res) => {\nres.send('Hello World!')\n})\n\napp.listen(port, () => {\n  console.log(`Example app listening on port ${port}`)\n})";
