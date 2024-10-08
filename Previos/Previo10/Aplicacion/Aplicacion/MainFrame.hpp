#include <wx/wx.h>

class MainFrame : public wxFrame {
public:
	MainFrame(const wxString& title);  // Constructor, recibe parametro de tipo wxString 

private:
	
	// Eventos (Manejo estatico)
	void OnButton1Clicked(wxCommandEvent& evt);  // Evento de presionar boton1
	void OnSliderChanged(wxCommandEvent& evt);	// Evento de cambiar el slide
	void OnTextChanged(wxCommandEvent& evt);	// Evento de cambiar texto

	// Eventos (Manejo dinamico)
	void OnAnyButtonClicked(wxCommandEvent& evt);  // Evento de presionar cualquier boton
	void OnButton2Clicked(wxCommandEvent& evt);  // Evento de presionar boton2
	void OnRadioBoxChanged(wxCommandEvent& evt);  // Evento de cambiar la RadioBox
	void OnListBoxChanged(wxCommandEvent& evt); // Evento de cambiar list Box

	void OnClose(wxCloseEvent& evt);	// Evento de cerrar la Ventana

	void OnMouseEvent(wxMouseEvent& evt); // Evento de mouse
	void OnKeyEvent(wxKeyEvent& evt); // Evento de teclado
	wxDECLARE_EVENT_TABLE();
};