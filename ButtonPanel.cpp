
#include "ButtonPanel.h"

bool reset = true;
int ButtonPanel::round_max = 10;
int ButtonPanel::round_count = 0;
string ButtonPanel::mode = "-r";


void ButtonPanel::init()
{
    round_count = 0;
    wxSizer *sizer = new wxBoxSizer(wxVERTICAL);

    wxPanel *button_panel = new wxPanel(this, wxID_ANY);
    wxSizer *button_sizer = new wxBoxSizer(wxHORIZONTAL);
    

    wxStaticText *choose_text = new wxStaticText(button_panel, wxID_ANY,
                                                 "Choose:");
    wxButton *rock_button     = new wxButton(button_panel, wxID_ANY,
                                             choice_to_wxString(ROCK));
    wxButton *paper_button    = new wxButton(button_panel, wxID_ANY,
                                             choice_to_wxString(PAPER));
    wxButton *scissors_button = new wxButton(button_panel, wxID_ANY,
                                             choice_to_wxString(SCISSORS));

    rock_button->Bind    (wxEVT_BUTTON, &ButtonPanel::on_rock, this);
    paper_button->Bind   (wxEVT_BUTTON, &ButtonPanel::on_paper, this);
    scissors_button->Bind(wxEVT_BUTTON, &ButtonPanel::on_scissors, this);

    button_sizer->Add(choose_text, 0, 0, 0);
    button_sizer->AddSpacer(5);
    button_sizer->Add(rock_button, 0, 0, 0);
    button_sizer->AddSpacer(5);
    button_sizer->Add(paper_button, 0, 0, 0);
    button_sizer->AddSpacer(5);
    button_sizer->Add(scissors_button, 0, 0, 0);
    button_panel->SetSizer(button_sizer);

    wxPanel *chosen_panel = new wxPanel(this, wxID_ANY);
    wxSizer *chosen_sizer = new wxGridSizer( 0, 0, 0);
    wxSizer *chosen_sizer2 = new wxGridSizer( 0, 0, 0);
    wxPanel *human_panel = new wxPanel(this, wxID_ANY);

    wxSizer *chosen_sizer3 = new wxGridSizer( 0, 0, 0);
    wxPanel *round_panel = new wxPanel(this, wxID_ANY);

    wxSizer *chosen_sizer4 = new wxGridSizer( 0, 0, 0);
    wxPanel *computer_panel = new wxPanel(this, wxID_ANY);

    wxSizer *chosen_sizer5 = new wxGridSizer( 0, 0, 0);
    wxPanel *winner_panel = new wxPanel(this, wxID_ANY);

    wxSizer *chosen_sizer6 = new wxGridSizer( 0, 0, 0);
    wxPanel *stat_panel = new wxPanel(this, wxID_ANY);
    
    wxSizer *chosen_sizer7 = new wxGridSizer( 0, 0, 0);
    wxPanel *humanw_panel = new wxPanel(this, wxID_ANY);
    
    wxSizer *chosen_sizer8 = new wxGridSizer( 0, 0, 0);
    wxPanel *cpuw_panel = new wxPanel(this, wxID_ANY);

    wxSizer *chosen_sizer9 = new wxGridSizer( 0, 0, 0);
    wxPanel *ties_panel = new wxPanel(this, wxID_ANY);

    wxSizer *chosen_sizer7g = new wxGridSizer( 0, 0, 0);
    wxPanel *humanw_panelg = new wxPanel(this, wxID_ANY);
    
    wxSizer *chosen_sizer8g = new wxGridSizer( 0, 0, 0);
    wxPanel *cpuw_panelg = new wxPanel(this, wxID_ANY);



    wxStaticText *chosen_text = new wxStaticText(chosen_panel, wxID_ANY,
                                                 "You chose: ");
    wxStaticText *human_text = new wxStaticText(human_panel, wxID_ANY,
                                                 "Human");

    wxStaticText *round_text = new wxStaticText(round_panel, wxID_ANY,"Round: "); 
    
    wxStaticText *computer_text = new wxStaticText(computer_panel, wxID_ANY, "Computer");                                        

    wxStaticText *winner_text = new wxStaticText(winner_panel, wxID_ANY,"The winner: "); 
          
    wxStaticText *stat_text = new wxStaticText(stat_panel, wxID_ANY,
                                                 "Statistics");
    wxStaticText *humanw_text = new wxStaticText(humanw_panel, wxID_ANY,
                                                 "Human wins: ");           
    wxStaticText *cpuw_text = new wxStaticText(cpuw_panel, wxID_ANY,
                                                 "Computer wins: "); 
    wxStaticText *ties_text = new wxStaticText(ties_panel, wxID_ANY,
                                                 "Ties: ");    

    wxStaticText *humanw_textg = new wxStaticText(humanw_panelg, wxID_ANY,
                                                 "Computer predicts: ");           
    wxStaticText *cpuw_textg = new wxStaticText(cpuw_panelg, wxID_ANY,
                                                 "Computer chooses: "); 

    button_chosen_text = new wxStaticText(chosen_panel, wxID_ANY, "");
    button_chosen_text->SetFont(button_chosen_text->GetFont());
    chosen_sizer->Add(chosen_text, 0, wxALIGN_LEFT, 0);
    chosen_sizer->Add(button_chosen_text, 0, 0, 0);
    
    chosen_sizer2->Add(human_text, 0, 0, 0);
    chosen_panel->SetSizer(chosen_sizer);
    human_panel->SetSizer(chosen_sizer2);
    round_panel->SetSizer(chosen_sizer3);

    round_display_text = new wxStaticText(round_panel, wxID_ANY, "");
    round_display_text->SetFont(round_display_text->GetFont());//.Larger();
    chosen_sizer3->Add(round_text, 0, wxALIGN_LEFT, 0);
    chosen_sizer3->Add(round_display_text, 0, 0, 0);

    computer_text2 = new wxStaticText(computer_panel, wxID_ANY, "");
    computer_text2->SetFont(computer_text2->GetFont());//.Larger()
    chosen_sizer4->Add(computer_text, 0, wxALIGN_LEFT, 0);
    chosen_sizer4->Add(computer_text2, 0, 0, 0);
    

    winner_text2 = new wxStaticText(winner_panel, wxID_ANY, "");
    winner_text2->SetFont(winner_text2->GetFont());//.Larger();
    chosen_sizer5->Add(winner_text, 0, wxALIGN_LEFT, 0);
    chosen_sizer5->Add(winner_text2, 0, 0, 0);
    
    stat_text2 = new wxStaticText(stat_panel, wxID_ANY, "");
    stat_text2->SetFont(stat_text2->GetFont());
    chosen_sizer6->Add(stat_text, 0, wxALIGN_CENTER, 0);
    chosen_sizer6->Add(stat_text2, 0, 0, 0);


    player_win = new wxStaticText(humanw_panel, wxID_ANY, "");
    player_win->SetFont(player_win->GetFont());
    chosen_sizer7->Add(humanw_text, 0, wxALIGN_LEFT, 0);
    chosen_sizer7->Add(player_win, 10, wxALIGN_LEFT, 10);

    //.Larger(); on GetFont of the bottom four
    cpu_win = new wxStaticText(cpuw_panel, wxID_ANY, "");
    cpu_win->SetFont(cpu_win->GetFont());
    chosen_sizer8->Add(cpuw_text, 0, wxALIGN_RIGHT, 0);
    chosen_sizer8->Add(cpu_win, 10, wxALIGN_LEFT, 10);

    player_wing = new wxStaticText(humanw_panelg, wxID_ANY, "");
    player_wing->SetFont(player_wing->GetFont());
    chosen_sizer7g->Add(humanw_textg, 10, wxALIGN_LEFT, 10);
    chosen_sizer7g->Add(player_wing, 10, wxALIGN_LEFT, 10);
    
    cpu_wing = new wxStaticText(cpuw_panelg, wxID_ANY, "");
    cpu_wing->SetFont(cpu_wing->GetFont());
    chosen_sizer8g->Add(cpuw_textg, 0, wxALIGN_LEFT, 0);
    chosen_sizer8g->Add(cpu_wing, 0, wxALIGN_LEFT, 0);


    ties_choses_text = new wxStaticText(ties_panel, wxID_ANY, "");
    ties_choses_text->SetFont(ties_choses_text->GetFont());
    chosen_sizer9->Add(ties_text, 0, wxALIGN_RIGHT, 0);
    chosen_sizer9->Add(ties_choses_text, 5, wxALIGN_LEFT, 0);

    computer_panel->SetSizer(chosen_sizer4);
    winner_panel->SetSizer(chosen_sizer5);
    humanw_panelg->SetSizer(chosen_sizer7g);
    cpuw_panelg->SetSizer(chosen_sizer8g);
    stat_panel->SetSizer(chosen_sizer6);
    humanw_panel->SetSizer(chosen_sizer7);
    cpuw_panel->SetSizer(chosen_sizer8);
    ties_panel->SetSizer(chosen_sizer9);


    sizer->Add(round_panel, 0, wxALIGN_CENTER, 0);
    sizer->AddSpacer(15);
    sizer->Add(human_panel, 0, wxALIGN_CENTER, 0);
    sizer->AddSpacer(2);
    sizer->Add(button_panel, 0, wxALIGN_CENTER, 0);
    sizer->AddSpacer(2);
    sizer->Add(chosen_panel, 0, wxALIGN_CENTER, 0);
    sizer->AddSpacer(15);
    sizer->Add(computer_panel, 0, wxALIGN_CENTER, 0);
    sizer->AddSpacer(10);
    sizer->Add(humanw_panelg, 0, wxALIGN_CENTER, 0);
    sizer->AddSpacer(2);
    sizer->Add(cpuw_panelg, 0, wxALIGN_CENTER, 0);
    sizer->AddSpacer(2);
    sizer->Add(winner_panel, 0, wxALIGN_CENTER, 0);
    sizer->AddSpacer(15);
    sizer->Add(stat_panel, 0, wxALIGN_CENTER, 0);
    sizer->AddSpacer(2);
    sizer->Add(humanw_panel, 0, wxALIGN_CENTER, 0);
    sizer->AddSpacer(2);
    sizer->Add(cpuw_panel, 0, wxALIGN_CENTER, 0);
    sizer->AddSpacer(2);
    sizer->Add(ties_panel, 0, wxALIGN_CENTER, 0);
    sizer->AddSpacer(10);

    SetSizer(sizer);
    ButtonPanel::update_round_text();
    cpu22->Decision();
        gl22.P2Choice = cpu22->choiceGetter();
}

void ButtonPanel::on_rock(wxCommandEvent& event)
{
    if(round_count<=round_max)
    {   
    update_button_choice_text(ROCK);
    player22->decision = 1;
    gl22.CollectInput(player22, cpu22);
    gl22.SetWinner(player22);
    gl22.DisplayResults();
    update_round_text();
    }
}

void ButtonPanel::on_paper(wxCommandEvent& event)
{
     if(round_count<=round_max)
    { 
    update_button_choice_text(PAPER);
    player22->decision = 2;
    gl22.CollectInput(player22, cpu22);
    gl22.SetWinner(player22);
    gl22.DisplayResults();
    update_round_text();
    }
}

void ButtonPanel::on_scissors(wxCommandEvent& event)
{
    if(round_count<=round_max)
    { 
    update_button_choice_text(SCISSORS);
    player22->decision = 3;
    
    gl22.CollectInput(player22, cpu22);
    gl22.SetWinner(player22);
    gl22.DisplayResults();
    update_round_text();
    }
}

void ButtonPanel::update_button_choice_text(const Choice choice)
{
    button_chosen_text->SetLabelText(choice_to_wxString(choice));   //int_to_wxString(5));

}

void ButtonPanel::clear_button_choice_text()
{
    button_chosen_text->SetLabelText("");   //int_to_wxString(5));

}

void ButtonPanel::update_round_text()
{
    if(ButtonPanel::reset){
        player22->Wins = 0;
        player22->Losses = 0;
        player22->Ties = 0;
        ButtonPanel::reset = false;
        cpu22 = Factory.decideMode(mode);
        GameLogic gl22;
    }
    
    round_count++;
    //printf("The current round is %i out of %i\n", round_count, round_max);
    if(round_count > round_max)
    {
        round_display_text->SetLabelText("END");
        printf("The game has concluded please start a new one\n");
    }
    else
    {
        printf("The current round is %i out of %i\n", round_count, round_max);
        cpu22->Decision();
        round_display_text->SetLabelText(int_to_wxString(round_count));
        
        gl22.P2Choice = cpu22->choiceGetter();

        // for(int i =0;i<1000;i++);
        // cout<<gl22.P2Choice<<endl;
        switch(cpu22->choiceGetter()){
            
            case(Choice2::ROCK): player_wing->SetLabelText("Scissors");cpu_wing->SetLabelText("Rock");break;
            case(Choice2::PAPER): player_wing->SetLabelText("Rock");cpu_wing->SetLabelText("Paper");break;
            case(Choice2::SCISSOR): player_wing->SetLabelText("Paper");cpu_wing->SetLabelText("Scissors");break;
            default: printf("Problem\n");
        }
        winner_text2->SetLabelText(gl22.winner);
        player_win->SetLabelText(int_to_wxString(player22->Wins));
        cpu_win->SetLabelText(int_to_wxString(player22->Losses));
        ties_choses_text->SetLabelText(int_to_wxString(player22->Ties));
    }
    
    //update all panels

}