#!/usr/bin/node
const process = require('process');
const fs = require('fs');

// The first argument is the file path
const file = process.argv[2];
// The content of file will be written in utf-8
fs.readFile(file, 'utf8', function (err, data) {
  // If there is an error during the reading, print the error object
  if (err) {
    console.log(err);
  } else {
    process.stdout.write(data);
  }
});
