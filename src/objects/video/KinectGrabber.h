/*==============================================================================

    ofxVisualProgramming: A visual programming patching environment for OF

    Copyright (c) 2018 Emanuele Mazza aka n3m3da <emanuelemazza@d3cod3.org>

    ofxVisualProgramming is distributed under the MIT License.
    This gives everyone the freedoms to use ofxVisualProgramming in any context:
    commercial or non-commercial, public or private, open or closed source.

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included
    in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
    OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.

    See https://github.com/d3cod3/ofxVisualProgramming for documentation

==============================================================================*/

#pragma once

#include "PatchObject.h"

#include "ofxKinect.h"
#include "ofxOpenCv.h"

#define CAM_MAX_WIDTH        1920
#define CAM_MAX_HEIGHT       1080

class KinectGrabber : public PatchObject {

public:

    KinectGrabber();

    void            newObject();
    void            setupObjectContent(shared_ptr<ofAppGLFWWindow> &mainWindow);
    void            updateObjectContent(map<int,PatchObject*> &patchObjects);
    void            drawObjectContent(ofxFontStash *font);
    void            removeObjectContent();
    void            mouseMovedObjectContent(ofVec3f _m);
    void            dragGUIObject(ofVec3f _m);

    void            loadKinectSettings();
    void            resetKinectSettings(int devID);
    void            resetKinectImage(bool ir);

    void            onToggleEvent(ofxDatGuiToggleEvent e);
    void            onSliderEvent(ofxDatGuiSliderEvent e);
    void            onMatrixEvent(ofxDatGuiMatrixEvent e);

    vector<string>      devicesVector;
    int                 kinectWidth, kinectHeight;
    int                 deviceID;
    bool                isIR;
    bool                needReset;
    bool                weHaveKinect;


    float               posX, posY, drawW, drawH;
    bool                isNewObject;

    ofxCvColorImage     colorCleanImage;
    ofxCvGrayscaleImage	cleanImage;
    ofxCvGrayscaleImage grayThreshNear;
    ofxCvGrayscaleImage grayThreshFar;

    ofxDatGui*          gui;
    ofxDatGuiHeader*    header;
    ofxDatGuiLabel*     deviceName;
    ofxDatGuiMatrix*    deviceSelector;
    ofxDatGuiToggle*    irButton;
    ofxDatGuiSlider*    nearThreshold;
    ofxDatGuiSlider*    farThreshold;

};
