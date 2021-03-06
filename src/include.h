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


// 3d objects

// computer_vision objects
#include "objects/computer_vision/BackgroundSubtraction.h"
#include "objects/computer_vision/ChromaKey.h"
#include "objects/computer_vision/ContourTracking.h"

// graphics objects

// gui objects
#include "objects/gui/moBang.h"
#include "objects/gui/moComment.h"
#include "objects/gui/moMessage.h"
#include "objects/gui/moSlider.h"
#include "objects/gui/moSignalViewer.h"
#include "objects/gui/moVideoViewer.h"

// input_output objects

// logic objects
#include "objects/logic/LoadBang.h"

// machine_learning objects

// math objects
#include "objects/math/Metronome.h"
#include "objects/math/SimpleRandom.h"
#include "objects/math/SimpleNoise.h"

// midi objects

// osc objects

// physics objects

// scripting
#if defined(TARGET_LINUX) || defined(TARGET_OSX)
#include "objects/scripting/BashScript.h"
#include "objects/scripting/PythonScript.h"
#endif

#include "objects/scripting/LuaScript.h"
#include "objects/scripting/ShaderObject.h"

// sound objects
#include "objects/sound/AudioAnalyzer.h"
#include "objects/sound/AudioDevice.h"
#include "objects/sound/BeatExtractor.h"
#include "objects/sound/FftExtractor.h"
#include "objects/sound/MelBandsExtractor.h"
#include "objects/sound/SoundfilePlayer.h"

// typography objects

// video objects
#include "objects/video/KinectGrabber.h"
#include "objects/video/VideoGrabber.h"
#include "objects/video/VideoPlayer.h"

// web objects

// window objects
#include "objects/windowing/OutputWindow.h"
