#ifndef DEMOFRAME_H_
#define DEMOFRAME_H_

// #include "RoundPanel.h"
#include "ButtonPanel.h"
// #include "ComputerPanel.h"
// #include "WinnerPanel.h"
// #include "StatPanel"
#include "ButtonPanel.h"
#include "wx/numdlg.h"

/**
 * The application frame.
 */
class DemoFrame : public wxFrame
{
public:
    /**
     * Constructor.
     * @param title the window title.
     */
    DemoFrame(const wxString& title);

    /**
     * Destructor.
     */
    virtual ~DemoFrame();

    /**
     * Event handler for the About menu item.
     * @param event the item selection event.
     */
    void on_about(wxCommandEvent& event);

    /**
     * Event handler for the Quit menu item.
     * @param event the item selection event.
     */
    void on_quit(wxCommandEvent& event);

    void on_start(wxCommandEvent& event);
    
    static int round_max;
    static int round_count;

private:
    // The event table that maps events to their handlers.
    wxDECLARE_EVENT_TABLE();
    //RoundPanel *round_panel;
    ButtonPanel *button_panel;
    //ComputerPanel *computer_panel;
    //WinnerPanel *winner_panel;
    //StatPanel *stat_panel;


    /**
     * Initialize the contents of the application frame.
     */
    void init();

    /**
     * Initialize the application frame's menu and status bars.
     */
    void init_menu_bar();

    /**
     * Initialize the application frame's sizer.
     */
    void init_sizer();
};

// IDs for the menu commands.
enum
{
    RPS_Quit  = wxID_EXIT,
    RPS_About = wxID_ABOUT,
    RPS_Start = wxID_ANY
};

#endif /* DEMOFRAME_H_ */
