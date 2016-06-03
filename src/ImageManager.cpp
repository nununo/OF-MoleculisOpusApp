//
//  ImageManager.cpp
//  BacteriaeOpusApp
//
//  Created by Nuno on 03/06/16.
//
//

#include "ImageManager.hpp"
#include <dirent.h>
#include <sys/stat.h>
#include "Constants.h"

//--------------------------------------------------------------
void ImageManager::loadImages() {
  
  vector<string> files = vector<string>();
  
  getFilesFromFolder(IMAGE_FOLDER, files);
  imageCount = files.size();
  myImages = new ofImage[imageCount]();
  
  for(int i=0;i<imageCount;i++) {
    myImages[i].load(IMAGE_FOLDER + files[i]);
  }
}
//--------------------------------------------------------------
int ImageManager::getFilesFromFolder (string dir, vector<string> &files)
{
  DIR *dp;
  struct dirent *dirp;
  size_t found;
  
  if((dp  = opendir(dir.c_str())) == NULL) {
    cout << "Error(" << errno << ") opening " << dir << endl;
    return errno;
  }
  
  while ((dirp = readdir(dp)) != NULL) {
    if (!S_ISDIR(dirp->d_type && dirp->d_name)) {
      string s = dirp->d_name;
      found = s.find(".jpg");
      if (found!=string::npos)
        files.push_back(string(dirp->d_name));
    }
  }
  closedir(dp);
  return 0;
}