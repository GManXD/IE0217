#include "MainFrame.hpp"  
#include <wx/wx.h>  
#include <wx/spinctrl.h>    // Para poder utilizar el SpinCtrl 


MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {   // Constructor

    wxPanel* panel = new wxPanel(this);     // Panel donde se mostraran todos los controles

    wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(150, 50), wxSize(100, 35), wxBU_LEFT);                      // Un boton

    wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "CheckBox", wxPoint(550, 55), wxDefaultSize, wxCHK_3STATE | wxCHK_ALLOW_3RD_STATE_FOR_USER);                               // Una caja de check

    wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "StaticText - NOT editable", wxPoint(0, 150), wxSize(400, -1), wxALIGN_CENTER_HORIZONTAL);       // Texto que no se puede editar
    staticText->SetBackgroundColour(*wxLIGHT_GREY);

    wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, "TextCtrl - editable", wxPoint(500, 145), wxSize(200, -1), wxTE_PASSWORD);  // Texto que se puede editar, El -1 indica valor por defecto, se le añade tipo password

    wxSlider* slider = new wxSlider(panel, wxID_ANY, 25, 0, 100, wxPoint(100, 250), wxSize(200, -1), wxSL_VALUE_LABEL);                   // Un slider 

    wxGauge* gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(590, 205), wxSize(-1, 125), wxGA_VERTICAL);
    gauge->SetValue(50);

    wxArrayString choices;  // Arreglo de strings, contiene las pciones de Choice
    choices.Add("Item C");
    choices.Add("Item A");
    choices.Add("Item B"); 

    wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(150, 375), wxSize(100, -1), choices, wxCB_SORT);  // Un Choice
    choice->Select(0);      // Selecciona por defecto el elemento 0 de el array para el Choice

    wxSpinCtrl* spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(550, 375), wxSize(100, -1), wxSP_WRAP);     // SpinCtrl

    wxListBox* listBox = new wxListBox(panel, wxID_ANY, wxPoint(150, 475), wxSize(100, -1), choices, wxLB_MULTIPLE);       // ListBox, similar al Choice

    wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "RadioBox", wxPoint(555, 450), wxDefaultSize, choices, 3, wxRA_SPECIFY_ROWS);  // RadioBox, selecciona uno

}