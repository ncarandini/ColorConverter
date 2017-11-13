/*
  Copyright (c) 2017 Nicolò Carandini. All right reserved.
  
  This file is licensed to you under the MIT license.
  See the LICENSE file in the project root for more information.

  This library use the code from GitHubGist https://gist.github.com/hdznrrd/656996
*/

#ifndef _COLORCONVERTER_H_INCLUDED
#define _COLORCONVERTER_H_INCLUDED

#include <Arduino.h>

class ColorConverter
{
    public:
        ColorConverter();
        void fromHSVToRGB(float h, float s, float v, byte *r, byte *g, byte *b);
};

#endif