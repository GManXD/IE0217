#include "MainFrame.hpp"  
#include <wx/wx.h>  
#include <wx/spinctrl.h>    // Para poder utilizar el SpinCtrl 


enum IDs {  // ID de los controles
    SLIDER_ID = 2,
    TEXT_ID = 3
};



wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)     // EVENTOS  (Manejo estatico)
    EVT_SLIDER(SLIDER_ID, MainFrame::OnSliderChanged)
    EVT_TEXT(TEXT_ID, MainFrame::OnTextChanged)
wxEND_EVENT_TABLE()


MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {   // Constructor

    wxPanel* panel = new wxPanel(this);     // Panel donde se mostraran todos los controles

    wxButton* button1 = new wxButton(panel, wxID_ANY, "Button1", wxPoint(150, 50), wxSize(100, 35), wxBU_LEFT);        // Boton1
    wxButton* button2 = new wxButton(panel, wxID_ANY, "Button2", wxPoint(150, 80), wxSize(100, 35), wxBU_LEFT);         // Boton2

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

    this->Bind(wxEVT_CLOSE_WINDOW, &MainFrame::OnClose, this);  // Evento de cerrar ventana
    this->Bind(wxEVT_BUTTON, &MainFrame::OnAnyButtonClicked, this);  // Evento de presionar cualquier boton
    button1->Bind(wxEVT_BUTTON, &MainFrame::OnButton1Clicked, this);   // Evento de presionar el boton1
    button2->Bind(wxEVT_BUTTON, &MainFrame::OnButton2Clicked, this);  // Evento de presionar el boton2
    


    // Eventos de Mouse
    //panel->Bind(wxEVT_LEFT_DOWN, &MainFrame::OnMouseEvent, this);   // Evento de click del mouse
    panel->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent,this);  //Evento de movimiento de mouse
    wxStatusBar* statusBar = CreateStatusBar();
    statusBar->SetDoubleBuffered(true);     // Para contrarrestar el parpadeo
}


void MainFrame::OnButton1Clicked(wxCommandEvent& evt) {  // Evento de presionar boton1
    wxLogStatus("Button1 Clicked");
    evt.Skip(); // Continuar la propagacion del evento
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

void MainFrame::OnAnyButtonClicked(wxCommandEvent& evt) {  // Evento de presionar cualquier boton
    wxLogMessage("Button Clicked");
}

void MainFrame::OnButton2Clicked(wxCommandEvent& evt) {  // Evento de presionar boton2
    wxLogStatus("Button2 Clicked");
    evt.Skip(); // Continuar la propagacion del evento
}

void MainFrame::OnClose(wxCloseEvent& evt) {
    wxLogMessage("Frame Close");  // Desplegar mensaje
    evt.Skip(); // Para que se pueda cerrar la ventana
}

void MainFrame::OnMouseEvent(wxMouseEvent& evt) {
    wxPoint mousePos = evt.GetPosition();
    wxString message = wxString::Format("Mouse Event Detected! (x=%d y=%d)", mousePos.x, mousePos.y);
    wxLogStatus(message);
}