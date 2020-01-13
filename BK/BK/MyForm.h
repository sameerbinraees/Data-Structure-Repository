/*Group: 
Muhammad Sameer Bin Raees
Rao Nouman Ahmad
Hassaan Akbar Cheema

Class: BSCS-6C

DAA Project
*/
#pragma once

#include<iostream>
#include<conio.h>
#include<fstream>
#include<cstring>
#include<ctype.h>
#include<string>
#include<algorithm>


int counter = 0;

struct word_tree {
	std::string data;
	struct word_tree *i[11] = { NULL };
};
word_tree *root = new word_tree;



namespace BK {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected:
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button3;


	private:
		/// <summary>
		/// Required designer variable.
		
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			resources->ApplyResources(this->richTextBox1, L"richTextBox1");
			this->richTextBox1->Name = L"richTextBox1";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton3);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			// 
			// button6
			// 
			resources->ApplyResources(this->button6, L"button6");
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// radioButton1
			// 
			resources->ApplyResources(this->radioButton1, L"radioButton1");
			this->radioButton1->BackColor = System::Drawing::Color::White;
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// radioButton2
			// 
			resources->ApplyResources(this->radioButton2, L"radioButton2");
			this->radioButton2->BackColor = System::Drawing::Color::White;
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton3
			// 
			resources->ApplyResources(this->radioButton3, L"radioButton3");
			this->radioButton3->BackColor = System::Drawing::Color::White;
			this->radioButton3->ForeColor = System::Drawing::Color::Black;
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->button2);
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->Name = L"panel2";
			// 
			// button7
			// 
			resources->ApplyResources(this->button7, L"button7");
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox2
			// 
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->Name = L"textBox2";
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->textBox4);
			resources->ApplyResources(this->panel3, L"panel3");
			this->panel3->Name = L"panel3";
			// 
			// button5
			// 
			resources->ApplyResources(this->button5, L"button5");
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox4
			// 
			resources->ApplyResources(this->textBox4, L"textBox4");
			this->textBox4->Name = L"textBox4";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->button8);
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Controls->Add(this->button3);
			resources->ApplyResources(this->panel4, L"panel4");
			this->panel4->Name = L"panel4";
			// 
			// button8
			// 
			resources->ApplyResources(this->button8, L"button8");
			this->button8->Name = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// textBox3
			// 
			resources->ApplyResources(this->textBox3, L"textBox3");
			this->textBox3->Name = L"textBox3";
			// 
			// button3
			// 
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->richTextBox1);
			this->DoubleBuffered = true;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		int min_dist(int a, int b, int c) {
			int temp = a;
			if (temp>b) {
				temp = b;
			}
			if (temp>c) {
				temp = c;
			}

			return temp;
		}


		int levenstein_distance(string a1, string a2) {


			int n1 = a1.size();
			int n2 = a2.size();


			int i, j;

			int check_array[20][20];

			for (i = 0; i <= n1; i++)
				check_array[i][0] = i;

			for (i = 0; i <= n2; i++)
				check_array[0][i] = i;


			for (i = 1; i <= n1; i++) {
				for (j = 1; j <= n2; j++) {
					if (a1[i - 1] == a2[j - 1]) {
						check_array[i][j] = min_dist(check_array[i - 1][j], check_array[i][j - 1], check_array[i - 1][j - 1]);
					}
					else {
						check_array[i][j] = (min_dist(check_array[i - 1][j], check_array[i][j - 1], check_array[i - 1][j - 1]) + 1);
					}

				}
				
			}
			return check_array[n1][n2];
		}

		void add_root(string word, word_tree *root) {
			root->data = word;
		}

		void add_tree(string word, string root_word, word_tree *node) {
			int dist;
			word_tree *temp = new word_tree;
			dist = levenstein_distance(word, root_word);

			if (node->i[dist] == NULL) {
				word_tree *nWord = new word_tree;
				node->i[dist] = nWord;
				nWord->data = word;
			}
			else {
				temp = node->i[dist];
				add_tree(word, temp->data, temp);
			}

		}

		
		void spell_corrector(string word, string root_word, word_tree *node) {
			int dist;
			int foo = 0;
			dist = levenstein_distance(word, root_word);
			if (dist == 0) {
				foo++;	
				String^ str2 = gcnew String(root_word.c_str());

				richTextBox1->AppendText("\r\n" + str2);
			}

			else if (dist == 1) {
				word_tree *temp = new word_tree;
				word_tree *temp2 = new word_tree;
				foo++;
	
				String^ str2 = gcnew String(root_word.c_str());
				richTextBox1->AppendText("\r\n" + str2);

				if (node->i[1] != NULL && node->i[2] != NULL) {
					temp = node->i[1];
					temp2 = node->i[2];
					spell_corrector(word, temp->data, temp);
					
					spell_corrector(word, temp2->data, temp2);
					
				}
			}

			else {
				word_tree *temp1 = new word_tree;
				word_tree *temp2 = new word_tree;
				word_tree *temp3 = new word_tree;

				if (node->i[dist - 1] != NULL && node->i[dist] != NULL && node->i[dist + 1] != NULL) {			//None of them is NULL
					temp1 = node->i[dist - 1];
					temp2 = node->i[dist];
					temp3 = node->i[dist + 1];
					spell_corrector(word, temp1->data, temp1);		
					spell_corrector(word, temp2->data, temp2);		
					spell_corrector(word, temp3->data, temp3);
					
				}

				else if (node->i[dist - 1] != NULL && node->i[dist] != NULL && node->i[dist + 1] == NULL) {		//Only dist+1 is NULL
					temp1 = node->i[dist - 1];
					temp2 = node->i[dist];
					spell_corrector(word, temp1->data, temp1);
					
					spell_corrector(word, temp2->data, temp2);
					
				}

				else if (node->i[dist - 1] != NULL && node->i[dist] == NULL && node->i[dist + 1] != NULL) {		//Only dist is NULL
					temp1 = node->i[dist - 1];
					temp3 = node->i[dist + 1];
					spell_corrector(word, temp1->data, temp1);
					
					spell_corrector(word, temp3->data, temp3);
					
				}

				else if (node->i[dist - 1] == NULL && node->i[dist] != NULL && node->i[dist + 1] != NULL) {		//Only dist-1 is NULL
					temp2 = node->i[dist];
					temp3 = node->i[dist + 1];
					spell_corrector(word, temp2->data, temp2);
					
					spell_corrector(word, temp3->data, temp3);
					
				}

				else if (node->i[dist - 1] != NULL && node->i[dist] == NULL && node->i[dist + 1] == NULL) {		//Only dist-1 is NOT NULL
					temp1 = node->i[dist - 1];
					spell_corrector(word, temp1->data, temp1);
					
				}

				else if (node->i[dist - 1] == NULL && node->i[dist] != NULL && node->i[dist + 1] == NULL) {		//Only dist is NOT NULL
					temp2 = node->i[dist];
					spell_corrector(word, temp2->data, temp2);
					
				}

				else if (node->i[dist - 1] == NULL && node->i[dist] == NULL && node->i[dist + 1] != NULL) {		//Only dist+1 is NOT NULL
					temp3 = node->i[dist + 1];
					spell_corrector(word, temp3->data, temp3);
					
				}
			}
			
		}

		int x = 0;

		void search_word(string word, string root_word, word_tree *node) {
			int dist;
			word_tree *temp = new word_tree;
			dist = levenstein_distance(word, root_word);

			if (dist == 0) {
				x++;
			}
			else {
				if (node->i[dist] != NULL) {
					temp = node->i[dist];
		
					search_word(word, temp->data, temp);
				}
				
			}
		}

		void sentence_correction(string s, word_tree *node) {
			int i = 0;
			transform(s.begin(), s.end(), s.begin(), ::toupper);
			string w;
			
			for (i = 0; i<s.length(); i++) {
				if (s[i] != ' ' && s[i] != '.') {
					w += s[i];
				}
				else {

					search_word(w, "AA", node);
					
					int a = 0;
					String^ str2 = gcnew String(w.c_str());
					if (x == 0) {
						if (a == 0) {
							
							richTextBox1->AppendText("\r\n\nWrong word is:\n" + str2);
							++a;
						}
						richTextBox1->AppendText("\r\n" + "Suggestion for");
						richTextBox1->AppendText("\r\n" + str2+":\n");
					
						spell_corrector(w, "AA", node);
					}
					else {
						richTextBox1->AppendText("\r\n\nWord is correct\n" );
					}
					x = 0;
					w.clear();
				}
			}

		}


		void MarshalString(String ^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

		void MarshalString(String ^ s, wstring& os) {
			using namespace Runtime::InteropServices;
			const wchar_t* chars =
				(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		

		string wrd;
		String^ word;

		word = textBox1->Text;

		MarshalString(word, wrd);

		transform(wrd.begin(), wrd.end(), wrd.begin(), ::toupper);
		x = 0;
		search_word(wrd, "AA", root);

		if (x != 0)
			textBox4->Text = "It exists";
		else
			textBox4->Text = "It doesn't exist,try our spell checker";


	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
		string wrd;
		String^ word;
		richTextBox1->Visible = true;
		word = textBox2->Text;
		MarshalString(word, wrd);
		
		transform(wrd.begin(), wrd.end(), wrd.begin(), ::toupper);
		x = 0;
		search_word(wrd, "AA", root);

		if (x != 0)
			richTextBox1->Text = "The word is correct";

		else {
			richTextBox1->Text = "Word not found\nSuggestions:";
			spell_corrector(wrd, "AA", root);
		}
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		string word;
		String^ str;
		richTextBox1->Visible = true;
		richTextBox1->Text = "";
		str = textBox3->Text;
		MarshalString(str, word);

		for (int i = 1; i <= word.length();++i) {

			if (word[i] == '.')
				break;

			if (i == word.length()) {
				
				word = word + '.';
				break;
			}
		
		}
		

		sentence_correction(word, root);

	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		

		
		panel2->Visible = false;
		panel3->Visible = false;
		panel4->Visible = false;
		richTextBox1->Visible = false;
		
		

		add_root("AA", root);

		string addWord;

		ifstream myfile("TwoLetterWords.txt");
		if (myfile.is_open()) {
			while (getline(myfile, addWord)) {
				add_tree(addWord, root->data, root);
			}
			myfile.close();
		}

	}


private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (radioButton1->Checked == true) {
		panel2->Visible = true;
		panel1->Visible = false;
		
	}
	else if (radioButton2->Checked == true) {
		panel3->Visible = true;
		panel1->Visible = false;
		
	}
	else if (radioButton3->Checked == true) {
		panel4->Visible = true;
		panel1->Visible = false;
	}
	}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	panel3->Visible = false;
	panel1->Visible = true;
	richTextBox1->Text = "";
	richTextBox1->Visible = false;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	panel1->Visible = true;
	panel2->Visible = false;
	richTextBox1->Text = "";
	richTextBox1->Visible = false;
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	panel1->Visible = true;
	panel4->Visible = false;
	richTextBox1->Text = "";
	richTextBox1->Visible = false;
}

};
}
