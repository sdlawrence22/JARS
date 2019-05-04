#ifndef BUTTONPANEL_H_
#define BUTTONPANEL_H_

#include "ButtonDemo.h"
#include "Choice.h"
#include "GameComponents/Choice2.h"
#include "GameComponents/User.h"
#include "GameComponents/CpuFactory.h"
#include "GameComponents/GameLogic.h"



// User *a = new User;
// CpuPlayer *b = new CpuPlayer;

/**
 * The button panel of the application frame.
 */
class ButtonPanel : public wxPanel
{
public:
    /**
     * Constructor.
     * @param parent the parent frame.
     */
    ButtonPanel(wxFrame *parent) : wxPanel(parent, wxID_ANY)
    {
        init();
    }

    /**
     * Event handler for the rock button.
     * @param event the button click event.
     */
    void on_rock(wxCommandEvent& event);

    /**
     * Event handler for the paper button.
     * @param event the button click event.
     */
    void on_paper(wxCommandEvent& event);

    /**
     * Event handler for the scissors button.
     * @param event the button click event.
     */
    void on_scissors(wxCommandEvent& event);
    static int round_max;
    static int round_count;
    static string mode;
    int jk = 0;
    User *player22  = new User(0, 0, 0);
    CpuFactory Factory;
    CpuPlayer *cpu22 = Factory.decideMode("-r");
    GameLogic gl22;
    
    static bool reset;
    /**
     * Update the displayed button choice object.
     * @param choice the chosen object.
     */
    void update_button_choice_text(const Choice choice);
    void clear_button_choice_text();
    /**
     * Update the displayed round object.
     * @param the current round object.
     */
    void update_round_text();

private:
    wxStaticText *button_chosen_text;
    wxStaticText *human_panel;
    wxStaticText *computer_text2;
    wxStaticText *computer_pred;
    wxStaticText *computer_next;
    wxStaticText *winner_text2;
    wxStaticText *stat_text2;
    wxStaticText *player_win;
    wxStaticText *cpu_win;
    wxStaticText *player_wing;
    wxStaticText *cpu_wing;
    wxStaticText *ties_choses_text;
    
    wxStaticText *round_display_text;

    /**
     * Initialize the panel contents.
     */
    void init();

};

#endif /* BUTTONPANEL_H_ */
