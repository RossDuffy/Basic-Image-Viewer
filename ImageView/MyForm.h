#pragma once

namespace ImageView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::PictureBox^ viewImage;
	private: System::Windows::Forms::Button^ Reset;
	private: System::Windows::Forms::Button^ moveLeftButton;
	private: System::Windows::Forms::Button^ moveRightButton;
	private: System::Windows::Forms::Button^ zoomInButton;
	private: System::Windows::Forms::Button^ zoomOutButton;
	private: System::Windows::Forms::Button^ resetZoomButton;
	private: System::Windows::Forms::Button^ openButton;
	private: System::Windows::Forms::OpenFileDialog^ ofd;
	private: System::Windows::Forms::Button^ closeButton;
	protected:




	protected:

	protected:


	protected:

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
			this->viewImage = (gcnew System::Windows::Forms::PictureBox());
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->moveLeftButton = (gcnew System::Windows::Forms::Button());
			this->moveRightButton = (gcnew System::Windows::Forms::Button());
			this->zoomInButton = (gcnew System::Windows::Forms::Button());
			this->zoomOutButton = (gcnew System::Windows::Forms::Button());
			this->resetZoomButton = (gcnew System::Windows::Forms::Button());
			this->openButton = (gcnew System::Windows::Forms::Button());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->closeButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->viewImage))->BeginInit();
			this->SuspendLayout();
			// 
			// viewImage
			// 
			this->viewImage->AccessibleDescription = L"viewImage";
			this->viewImage->AccessibleName = L"viewImage";
			this->viewImage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->viewImage->Location = System::Drawing::Point(10, 12);
			this->viewImage->Name = L"viewImage";
			this->viewImage->Size = System::Drawing::Size(535, 267);
			this->viewImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->viewImage->TabIndex = 0;
			this->viewImage->TabStop = false;
			this->viewImage->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// Reset
			// 
			this->Reset->AccessibleDescription = L"resetButton";
			this->Reset->AccessibleName = L"resetButton";
			this->Reset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Reset->Location = System::Drawing::Point(10, 324);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(75, 50);
			this->Reset->TabIndex = 1;
			this->Reset->Text = L"Reset";
			this->Reset->UseVisualStyleBackColor = true;
			this->Reset->Click += gcnew System::EventHandler(this, &MyForm::Reset_Click);
			// 
			// moveLeftButton
			// 
			this->moveLeftButton->AccessibleDescription = L"moveLeftButton";
			this->moveLeftButton->AccessibleName = L"moveLeftButton";
			this->moveLeftButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->moveLeftButton->Location = System::Drawing::Point(91, 324);
			this->moveLeftButton->Name = L"moveLeftButton";
			this->moveLeftButton->Size = System::Drawing::Size(50, 50);
			this->moveLeftButton->TabIndex = 2;
			this->moveLeftButton->Text = L"<==";
			this->moveLeftButton->UseVisualStyleBackColor = true;
			this->moveLeftButton->Click += gcnew System::EventHandler(this, &MyForm::moveLeftButton_Click);
			// 
			// moveRightButton
			// 
			this->moveRightButton->AccessibleDescription = L"moveRightButton";
			this->moveRightButton->AccessibleName = L"moveRightButton";
			this->moveRightButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->moveRightButton->Location = System::Drawing::Point(147, 324);
			this->moveRightButton->Name = L"moveRightButton";
			this->moveRightButton->Size = System::Drawing::Size(50, 50);
			this->moveRightButton->TabIndex = 3;
			this->moveRightButton->Text = L"==>";
			this->moveRightButton->UseVisualStyleBackColor = true;
			this->moveRightButton->Click += gcnew System::EventHandler(this, &MyForm::moveRightButton_Click);
			// 
			// zoomInButton
			// 
			this->zoomInButton->AccessibleDescription = L"zoomInButton";
			this->zoomInButton->AccessibleName = L"zoomInButton";
			this->zoomInButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->zoomInButton->Location = System::Drawing::Point(250, 324);
			this->zoomInButton->Name = L"zoomInButton";
			this->zoomInButton->Size = System::Drawing::Size(50, 50);
			this->zoomInButton->TabIndex = 4;
			this->zoomInButton->Text = L"Zoom +";
			this->zoomInButton->UseVisualStyleBackColor = true;
			this->zoomInButton->Click += gcnew System::EventHandler(this, &MyForm::zoomInButton_Click);
			// 
			// zoomOutButton
			// 
			this->zoomOutButton->AccessibleDescription = L"zoomOutButton";
			this->zoomOutButton->AccessibleName = L"zoomOutButton";
			this->zoomOutButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->zoomOutButton->Location = System::Drawing::Point(306, 324);
			this->zoomOutButton->Name = L"zoomOutButton";
			this->zoomOutButton->Size = System::Drawing::Size(50, 50);
			this->zoomOutButton->TabIndex = 5;
			this->zoomOutButton->Text = L"Zoom  -";
			this->zoomOutButton->UseVisualStyleBackColor = true;
			this->zoomOutButton->Click += gcnew System::EventHandler(this, &MyForm::zoomOutButton_Click);
			// 
			// resetZoomButton
			// 
			this->resetZoomButton->AccessibleDescription = L"resetZoomButton";
			this->resetZoomButton->AccessibleName = L"resetZoomButton";
			this->resetZoomButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->resetZoomButton->Location = System::Drawing::Point(362, 324);
			this->resetZoomButton->Name = L"resetZoomButton";
			this->resetZoomButton->Size = System::Drawing::Size(50, 50);
			this->resetZoomButton->TabIndex = 6;
			this->resetZoomButton->Text = L"Reset Zoom";
			this->resetZoomButton->UseVisualStyleBackColor = true;
			this->resetZoomButton->Click += gcnew System::EventHandler(this, &MyForm::resetZoomButton_Click);
			// 
			// openButton
			// 
			this->openButton->AccessibleDescription = L"openButton";
			this->openButton->AccessibleName = L"openButton";
			this->openButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->openButton->Location = System::Drawing::Point(495, 324);
			this->openButton->Name = L"openButton";
			this->openButton->Size = System::Drawing::Size(50, 50);
			this->openButton->TabIndex = 7;
			this->openButton->Text = L"Open Image";
			this->openButton->UseVisualStyleBackColor = true;
			this->openButton->Click += gcnew System::EventHandler(this, &MyForm::openButton_Click);
			// 
			// ofd
			// 
			this->ofd->Filter = L"\"JPEG|*.jpg|All Files|*.*\"";
			// 
			// closeButton
			// 
			this->closeButton->AccessibleDescription = L"closeButton";
			this->closeButton->AccessibleName = L"closeButton";
			this->closeButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->closeButton->Location = System::Drawing::Point(439, 324);
			this->closeButton->Name = L"closeButton";
			this->closeButton->Size = System::Drawing::Size(50, 50);
			this->closeButton->TabIndex = 8;
			this->closeButton->Text = L"Close Image";
			this->closeButton->UseVisualStyleBackColor = true;
			this->closeButton->Click += gcnew System::EventHandler(this, &MyForm::closeButton_Click);
			// 
			// MyForm
			// 
			this->AccessibleDescription = L"imageViewer";
			this->AccessibleName = L"imageViewer";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(559, 386);
			this->Controls->Add(this->closeButton);
			this->Controls->Add(this->openButton);
			this->Controls->Add(this->resetZoomButton);
			this->Controls->Add(this->zoomOutButton);
			this->Controls->Add(this->zoomInButton);
			this->Controls->Add(this->moveRightButton);
			this->Controls->Add(this->moveLeftButton);
			this->Controls->Add(this->Reset);
			this->Controls->Add(this->viewImage);
			this->MinimumSize = System::Drawing::Size(575, 425);
			this->Name = L"MyForm";
			this->Text = L"Image Viewer";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->viewImage))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		array<String^>^ files;
		String^ path;
		int currentIndex;
		const int zoomLevel = 100;
		int Zooms = 0;

		private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

		}

		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		}

		private: System::Void Reset_Click(System::Object^ sender, System::EventArgs^ e) {
			Application::Restart();
		}
		
		private: System::Void closeButton_Click(System::Object^ sender, System::EventArgs^ e) {
			viewImage->ImageLocation = "";
			Width = 575;
			Height = 425;
		}
		
		private: System::Void openButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				viewImage->ImageLocation = ofd->FileName;
				path = System::IO::Path::GetDirectoryName(ofd->FileName);
				files = System::IO::Directory::GetFiles(path);

				for (int i = 0; i < files->Length; i++) {
					if (files[i] == ofd->FileName) {
						currentIndex = i;
						break;
					}
				}
			}
		}

		private: System::Void moveRightButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (currentIndex != files->Length -1){
				currentIndex++;
			}
			viewImage->ImageLocation = files[currentIndex];
		}

		private: System::Void moveLeftButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (currentIndex != 0)
			{
				currentIndex--;
			}
			viewImage->ImageLocation = files[currentIndex];
		}

		private: System::Void zoomInButton_Click(System::Object^ sender, System::EventArgs^ e) {
			viewImage->Top -= zoomLevel / 2;
			viewImage->Left -= zoomLevel / 2;
			viewImage->Height += zoomLevel;
			viewImage->Width += zoomLevel;
			Zooms++;
		}
		
		private: System::Void zoomOutButton_Click(System::Object^ sender, System::EventArgs^ e) {
			viewImage->Top += zoomLevel / 2;
			viewImage->Left += zoomLevel / 2;
			viewImage->Height -= zoomLevel;
			viewImage->Width -= zoomLevel;
			Zooms--;
		}

		private: System::Void resetZoomButton_Click(System::Object^ sender, System::EventArgs^ e) {
			int newZoom = Zooms;
			if (Zooms > 0){
				for (int i = 0; i < newZoom; i++) {
					zoomOutButton->PerformClick();
				}
			}

			if (Zooms < 0) {
				for (int i = 0; i > newZoom; i--) {
					zoomInButton->PerformClick();
				}
			}

			Zooms = 0;
		}
};
}
