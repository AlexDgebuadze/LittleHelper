#/usr/bin/env bash

echo "starting Sass install";
echo "destination :";
read DEST;
cd $DEST;
echo "we are here Now : ";
pwd;
sudo npm install --global gulp-cli;
sudo npm init;
sudo npm install --save-dev gulp;

sudo npm install node-sass gulp-sass --save-dev;


echo "Sass Installed!";
