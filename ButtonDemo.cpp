#include "ButtonDemo.h"
#include "DemoFrame.h"
#include <iostream>
#include <string>
#include "GameComponents/Menu.h"
#include "GameComponents/CpuPlayer.h"
#include "GameComponents/FileManager.h"
#include "GameComponents/CpuPlayer.h"
#include "GameComponents/CpuR.h"
#include "GameComponents/CpuML.h"
using namespace std;
// Create a new application object.
wxIMPLEMENT_APP(ButtonDemo);

bool ButtonDemo::OnInit()
{

    if (!wxApp::OnInit()) return false;

    DemoFrame *frame = new DemoFrame("Button Demo");
    frame->Show(true);
    return true;
}
