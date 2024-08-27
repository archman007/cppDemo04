/***************************************************************
 * Name:      cppDemo04App.cpp
 * Purpose:   Code for Application Class
 * Author:    Mr. Arch Brooks (arch@archbrooks.com)
 * Created:   Tuesday, 27 August 2024 05:37:30
 * Copyright: Mr. Arch Brooks (https://archman.us)
 * License:
 **************************************************************/

#include "cppDemo04App.h"

//(*AppHeaders
#include "cppDemo04Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(cppDemo04App);

bool cppDemo04App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	cppDemo04Frame* Frame = new cppDemo04Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}

