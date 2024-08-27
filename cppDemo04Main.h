/***************************************************************
 * Name:      cppDemo04Main.h
 * Purpose:   Defines Application Frame
 * Author:    Mr. Arch Brooks (arch@archbrooks.com)
 * Created:   Tuesday, 27 August 2024 05:37:30
 * Copyright: Mr. Arch Brooks (https://archman.us)
 * License:
 **************************************************************/

#ifndef CPPMYSKEL1MAIN_H
#define CPPMYSKEL1MAIN_H

//(*Headers(cppDemo04Frame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class cppDemo04Frame: public wxFrame
{
    public:

        cppDemo04Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~cppDemo04Frame();

    private:

        //(*Handlers(cppDemo04Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(cppDemo04Frame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(cppDemo04Frame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CPPMYSKEL1MAIN_H

