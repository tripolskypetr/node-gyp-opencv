const { createImage } = require('server');
const { exec } = require('child_process');
createImage();
exec('node node_modules/open-cli/cli.js hello-world.png');
