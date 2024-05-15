#include "MainFrame.hpp"  
#include <wx/wx.h>  
#include <wx/spinctrl.h>    // Para poder utilizar el SpinCtrl 


enum IDs {  // ID de los controles
    BUTTON_ID = 2,
    SLIDER_ID = 3,
    TEXT_ID = 4
};



wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)     // EVENTOS
    EVT_BUTTON(BUTTON_ID, MainFrame::OnButtonClicked)
    EVT_SLIDER(SLIDER_ID, MainFrame::OnSliderChanged)
    EVT_TEXT(TEXT_ID, MainFrame::OnTextChanged)
wxEND_EVENT_TABLE()


MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {   // Constructor

    wxPanel* panel = new wxPanel(this);     // Panel donde se mostraran todos los controles

    wxButton* button = new wxButton(panel, BUTTON_ID, "Button", wxPoint(150, 50), wxSize(100, 35), wxBU_LEFT);                      // Un boton

    wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "CheckBox", wxPoint(550, 55), wxDefaultSize, wxCHK_3STATE | wxCHK_ALLOW_3RD_STATE_FOR_USER);                               // Una caja de check

    wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "StaticText - NOT editable", wxPoint(0, 150), wxSize(400, -1), wxALIGN_CENTER_HORIZONTAL);       // Texto que no se puede editar
    staticText->SetBackgroundColour(*wxLIGHT_GREY);

    wxTextCtrl* textCtrl = new wxTextCtrl(panel, TEXT_ID, "TextCtrl - editable", wxPoint(500, 145), wxSize(200, -1), wxTE_PASSWORD);  // Texto que se puede editar, El -1 indica valor por defecto, se le añade tipo password

    wxSlider* slider = new wxSlider(panel, SLIDER_ID, 0, 0, 100, wxPoint(100, 250), wxSize(200, -1), wxSL_VALUE_LABEL);                   // Un slider 

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


    // Eventos de manejo Dinamico:
    listBox->Bind(wxEVT_LISTBOX, &MainFrame::OnListBoxChanged, this);
    radioBox->Bind(wxEVT_RADIOBOX, &MainFrame::OnRadioBoxChanged, this);

    listBox->Unbind(wxEVT_LISTBOX, &MainFrame::OnListBoxChanged, this);  // Desenlazar
    CreateStatusBar();
}


void MainFrame::OnButtonClicked(wxCommandEvent& evt) {  // Evento de presionar boton
    wxLogStatus("Button Clicked");
}

void MainFrame::OnSliderChanged(wxCommandEvent& evt) {  // Evento de deslizar el slider
    wxString str = wxString::Format("Slider Value: %d", evt.GetInt());
    wxLogStatus(str);
}

void MainFrame::OnTextChanged(wxCommandEvent& evt) {    // Evento de cambiar el texto
    wxString str = wxString::Format("Text: %s", evt.GetString());
    wxLogStatus(str);
}

void MainFrame::OnRadioBoxChanged(wxCommandEvent& evt) {
    wxLogStatus("Radio Box Changed");
}

void MainFrame::OnListBoxChanged(wxCommandEvent& evt) {
    wxLogStatus("List Box Changed");
}