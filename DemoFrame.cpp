#include "DemoFrame.h"
#include "GameComponents/Menu.h"

int round_max = 1;
bool ButtonPanel::reset = false;
Menu a;
    
// The event table.
wxBEGIN_EVENT_TABLE(DemoFrame, wxFrame)

    EVT_MENU(RPS_Quit,  DemoFrame::on_quit)
    EVT_MENU(RPS_About, DemoFrame::on_about)
    EVT_MENU(RPS_Start,  DemoFrame::on_start)

wxEND_EVENT_TABLE()

const int SIDE_MARGINS = 40;

DemoFrame::DemoFrame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title),
      //round_panel(new RoundPanel(this)),
      button_panel(new ButtonPanel(this))
      //computer_panel(new ComputerPanel(this)),
      //winner_panel(new WinnerPanel(this)),
      //stat_panel(new StatPanel(this))
{
    init();

    wxSize size = GetSize();
    size.SetWidth (size.GetWidth() + SIDE_MARGINS);
    SetSize(size);
}

DemoFrame::~DemoFrame()
{
    //delete round_panel;
    delete button_panel;
    //delete computer_panel;
    //delete winner_panel;
    //delete stat_panel;
}

void DemoFrame::init()
{
    init_menu_bar();
    init_sizer();

    wxSize size = GetBestSize();
    
    SetMinClientSize(size);
    a.Setfirsttime(false);
}

void DemoFrame::init_menu_bar()
{
    wxMenu *fileMenu = new wxMenu;
    fileMenu->Append(RPS_Start, "S&tart\tAlt-S", "Start game");
    fileMenu->Append(RPS_Quit,  "E&xit\tAlt-X", "Quit program");

    wxMenu *helpMenu = new wxMenu;
    helpMenu->Append(RPS_About, "&About\tF1",   "Show about dialog");

    wxMenuBar *menuBar = new wxMenuBar();
    menuBar->Append(fileMenu, "&File");
    menuBar->Append(helpMenu, "&Help");
    SetMenuBar(menuBar);
}

void DemoFrame::init_sizer()
{
    wxSizer *frame_sizer = new wxBoxSizer(wxVERTICAL);

    frame_sizer->AddSpacer(20);
    //frame_size->Add(round_panel, 0, wxALIGN_CENTER, 0);
    frame_sizer->Add(button_panel, 0, wxALIGN_CENTER, 0);
    //frame_size->Add(computer_panel, 0, wxALIGN_CENTER, 0);
    //frame_size->Add(winner_panel, 0, wxALIGN_CENTER, 0);
    //frame_size->Add(stat_panel, 0, wxALIGN_CENTER, 0);

    SetSizerAndFit(frame_sizer);
    
}

void DemoFrame::on_about(wxCommandEvent& WXUNUSED(event))
{
    wxMessageBox(wxString::Format(
                    "This is a fun RPS game with machine learning\n"
                    "built with %s\n"
                    "and running under %s.",
                    wxVERSION_STRING,
                    wxGetOsDescription()
                ),
                "RPS EXTREME",
                wxOK | wxICON_INFORMATION,
                this);
}

void DemoFrame::on_quit(wxCommandEvent& WXUNUSED(event))
{
    Close(true);  // true is to force the frame to close
}

void DemoFrame::on_start(wxCommandEvent& WXUNUSED(event))
{
    long round = wxGetNumberFromUser( wxT("Please enter how many rounds\n")
                                    wxT("you would like to play."),
                                    wxT("Enter a number:"), wxT("Numeric input test"),
                                     20, 0, 100, this );
    //logic to start a game rounds = round
    //ButtonPanel round_set;
    //round_set.set_round_max(round);
    //ButtonPanel::round_max = round;
    //ButtonPanel::player22->clear();
    ButtonPanel::round_max = round;
    ButtonPanel::round_count = 0;
    ButtonPanel::reset = true;
    button_panel->update_round_text();
    button_panel->clear_button_choice_text();

    printf("Beginning a new match with %li rounds\n", round);



}
