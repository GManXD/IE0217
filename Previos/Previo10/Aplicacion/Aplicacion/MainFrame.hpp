#include <wx/wx.h>

class MainFrame : public wxFrame {
public:
	MainFrame(const wxString& title);  // Constructor, recibe parametro de tipo wxString 

private:
	void OnButtonClicked(wxCommandEvent& evt);  // Evento de presionar boton
	void OnSliderChanged(wxCommandEvent& evt);	// Evento de cambiar el slide
	void OnTextChanged(wxCommandEvent& evt);	// Evento de cambiar texto
	wxDECLARE_EVENT_TABLE();
};