#include <wx/wx.h>

class MainFrame : public wxFrame {
public:
	MainFrame(const wxString& title);  // Constructor, recibe parametro de tipo wxString 

private:
	// Eventos (Manejo estatico)
	void OnButtonClicked(wxCommandEvent& evt);  // Evento de presionar boton
	void OnSliderChanged(wxCommandEvent& evt);	// Evento de cambiar el slide
	void OnTextChanged(wxCommandEvent& evt);	// Evento de cambiar texto

	// Eventos (Manejo dinamico)
	void OnRadioBoxChanged(wxCommandEvent& evt);  // Evento de cambiar la RadioBox
	void OnListBoxChanged(wxCommandEvent& evt); // Evento de cambiar list Box
	wxDECLARE_EVENT_TABLE();
};