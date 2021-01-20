#include "cApp.h"

//genreates winMain like int main
wxIMPLEMENT_APP(cApp);

cApp::cApp()
{

}
cApp::~cApp()
{

}

bool cApp::OnInit()
{
	m_frame1 = new cMain();
	m_frame1->Show();

	return true;
}