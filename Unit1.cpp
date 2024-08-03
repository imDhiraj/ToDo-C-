//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EnterClick(TObject *Sender)
{
	String taskText = TaskEdit->Text;
	if (!taskText.IsEmpty()) {
		 TaskListBox->Items->Add(taskText);
		// ListView1->Items->Add(taskText);
		 TaskEdit->Text="";
	}
	else{
		ShowMessage("task cannot be empty");
	}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::TaskListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	int index= Item->Index;
	TaskListBox-> Items->Delete(index);

}
//---------------------------------------------------------------------------
