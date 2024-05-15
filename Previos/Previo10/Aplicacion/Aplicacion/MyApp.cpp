#include "MainFrame.hpp"
#include "MyApp.hpp"


wxIMPLEMENT_APP(App);	// Macro

bool App::OnInit() {
	MainFrame* mainFrame = new MainFrame("C++ GUI");	// Se crea el objeto tipo MainFrame y se le envia el titulo
	// mainFrame->SetClientSize(800, 600);
	// mainFrame->Center();
	mainFrame->Show();	// Muestra la ventana
	return true;
}