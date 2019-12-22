#pragma once
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include <opencv2/imgproc/imgproc.hpp>

namespace opencv_forms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices; // To use the class name "ConvertString2Char"
	using namespace cv;
	using namespace std;

	/// <summary>
	/// Summary for FiltersForm
	/// </summary>
	public ref class FiltersForm : public System::Windows::Forms::Form
	{
	public:
		FiltersForm(System::Windows::Forms::Form ^ MF)
		{
			mainForm = MF;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FiltersForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form ^ mainForm;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPageBasicFilter;
	private: System::Windows::Forms::TabPage^  tabPageDetectLineCircle;
	private: System::Windows::Forms::Label^  lblBasicFilterSrcImg;
	private: System::Windows::Forms::Button^  btnBasicFilterLoadImage;
	private: System::Windows::Forms::PictureBox^  picLaplacianFilter;
	private: System::Windows::Forms::PictureBox^  picBlurFilter;
	private: System::Windows::Forms::PictureBox^  picHistogramBalance;
	private: System::Windows::Forms::PictureBox^  picBasicFilterSrcImg;
	private: System::Windows::Forms::Label^  lblSobelFilter;
	private: System::Windows::Forms::Label^  lblCannyFilter;
	private: System::Windows::Forms::Label^  lblLaplacianFilter;
	private: System::Windows::Forms::Label^  lblBlurFilter;
	private: System::Windows::Forms::Label^  lblHistogramBalance;
	private: System::Windows::Forms::PictureBox^  picSobelFilter;
	private: System::Windows::Forms::PictureBox^  picCannyFilter;
	private: System::Windows::Forms::Label^  lblThirdCustomizeFilter;

	private: System::Windows::Forms::Label^  lblSecondCustomizeFilter;

	private: System::Windows::Forms::Label^  lblFirstCustomizeFilter;
	private: System::Windows::Forms::PictureBox^  picThirdCustomizeFilter;




	private: System::Windows::Forms::PictureBox^  picSecondCustomizeFilter;

	private: System::Windows::Forms::PictureBox^  picFirstCustomizeFilter;

	private: System::Windows::Forms::PictureBox^  picResultImage;
	private: System::Windows::Forms::PictureBox^  picDetectLineCircleSrcImg;
	private: System::Windows::Forms::Label^  lblResultImage;
	private: System::Windows::Forms::Button^  btnDetectLineCircleLoadImage;
	private: System::Windows::Forms::Label^  lblDetectLineCircleSrcImg;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageBasicFilter = (gcnew System::Windows::Forms::TabPage());
			this->picThirdCustomizeFilter = (gcnew System::Windows::Forms::PictureBox());
			this->picSecondCustomizeFilter = (gcnew System::Windows::Forms::PictureBox());
			this->picFirstCustomizeFilter = (gcnew System::Windows::Forms::PictureBox());
			this->lblThirdCustomizeFilter = (gcnew System::Windows::Forms::Label());
			this->lblSecondCustomizeFilter = (gcnew System::Windows::Forms::Label());
			this->lblFirstCustomizeFilter = (gcnew System::Windows::Forms::Label());
			this->picSobelFilter = (gcnew System::Windows::Forms::PictureBox());
			this->picCannyFilter = (gcnew System::Windows::Forms::PictureBox());
			this->picLaplacianFilter = (gcnew System::Windows::Forms::PictureBox());
			this->picBlurFilter = (gcnew System::Windows::Forms::PictureBox());
			this->picHistogramBalance = (gcnew System::Windows::Forms::PictureBox());
			this->picBasicFilterSrcImg = (gcnew System::Windows::Forms::PictureBox());
			this->lblSobelFilter = (gcnew System::Windows::Forms::Label());
			this->lblCannyFilter = (gcnew System::Windows::Forms::Label());
			this->lblLaplacianFilter = (gcnew System::Windows::Forms::Label());
			this->lblBlurFilter = (gcnew System::Windows::Forms::Label());
			this->lblHistogramBalance = (gcnew System::Windows::Forms::Label());
			this->lblBasicFilterSrcImg = (gcnew System::Windows::Forms::Label());
			this->btnBasicFilterLoadImage = (gcnew System::Windows::Forms::Button());
			this->tabPageDetectLineCircle = (gcnew System::Windows::Forms::TabPage());
			this->picResultImage = (gcnew System::Windows::Forms::PictureBox());
			this->picDetectLineCircleSrcImg = (gcnew System::Windows::Forms::PictureBox());
			this->lblResultImage = (gcnew System::Windows::Forms::Label());
			this->lblDetectLineCircleSrcImg = (gcnew System::Windows::Forms::Label());
			this->btnDetectLineCircleLoadImage = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPageBasicFilter->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picThirdCustomizeFilter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSecondCustomizeFilter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picFirstCustomizeFilter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSobelFilter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picCannyFilter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picLaplacianFilter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBlurFilter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHistogramBalance))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBasicFilterSrcImg))->BeginInit();
			this->tabPageDetectLineCircle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picResultImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picDetectLineCircleSrcImg))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPageBasicFilter);
			this->tabControl1->Controls->Add(this->tabPageDetectLineCircle);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1324, 746);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPageBasicFilter
			// 
			this->tabPageBasicFilter->Controls->Add(this->picThirdCustomizeFilter);
			this->tabPageBasicFilter->Controls->Add(this->picSecondCustomizeFilter);
			this->tabPageBasicFilter->Controls->Add(this->picFirstCustomizeFilter);
			this->tabPageBasicFilter->Controls->Add(this->lblThirdCustomizeFilter);
			this->tabPageBasicFilter->Controls->Add(this->lblSecondCustomizeFilter);
			this->tabPageBasicFilter->Controls->Add(this->lblFirstCustomizeFilter);
			this->tabPageBasicFilter->Controls->Add(this->picSobelFilter);
			this->tabPageBasicFilter->Controls->Add(this->picCannyFilter);
			this->tabPageBasicFilter->Controls->Add(this->picLaplacianFilter);
			this->tabPageBasicFilter->Controls->Add(this->picBlurFilter);
			this->tabPageBasicFilter->Controls->Add(this->picHistogramBalance);
			this->tabPageBasicFilter->Controls->Add(this->picBasicFilterSrcImg);
			this->tabPageBasicFilter->Controls->Add(this->lblSobelFilter);
			this->tabPageBasicFilter->Controls->Add(this->lblCannyFilter);
			this->tabPageBasicFilter->Controls->Add(this->lblLaplacianFilter);
			this->tabPageBasicFilter->Controls->Add(this->lblBlurFilter);
			this->tabPageBasicFilter->Controls->Add(this->lblHistogramBalance);
			this->tabPageBasicFilter->Controls->Add(this->lblBasicFilterSrcImg);
			this->tabPageBasicFilter->Controls->Add(this->btnBasicFilterLoadImage);
			this->tabPageBasicFilter->Location = System::Drawing::Point(4, 25);
			this->tabPageBasicFilter->Name = L"tabPageBasicFilter";
			this->tabPageBasicFilter->Padding = System::Windows::Forms::Padding(3);
			this->tabPageBasicFilter->Size = System::Drawing::Size(1316, 717);
			this->tabPageBasicFilter->TabIndex = 1;
			this->tabPageBasicFilter->Text = L"Basic Filter";
			this->tabPageBasicFilter->UseVisualStyleBackColor = true;
			// 
			// picThirdCustomizeFilter
			// 
			this->picThirdCustomizeFilter->Location = System::Drawing::Point(904, 507);
			this->picThirdCustomizeFilter->Name = L"picThirdCustomizeFilter";
			this->picThirdCustomizeFilter->Size = System::Drawing::Size(400, 200);
			this->picThirdCustomizeFilter->TabIndex = 21;
			this->picThirdCustomizeFilter->TabStop = false;
			// 
			// picSecondCustomizeFilter
			// 
			this->picSecondCustomizeFilter->Location = System::Drawing::Point(456, 507);
			this->picSecondCustomizeFilter->Name = L"picSecondCustomizeFilter";
			this->picSecondCustomizeFilter->Size = System::Drawing::Size(400, 200);
			this->picSecondCustomizeFilter->TabIndex = 20;
			this->picSecondCustomizeFilter->TabStop = false;
			// 
			// picFirstCustomizeFilter
			// 
			this->picFirstCustomizeFilter->Location = System::Drawing::Point(8, 507);
			this->picFirstCustomizeFilter->Name = L"picFirstCustomizeFilter";
			this->picFirstCustomizeFilter->Size = System::Drawing::Size(400, 200);
			this->picFirstCustomizeFilter->TabIndex = 19;
			this->picFirstCustomizeFilter->TabStop = false;
			// 
			// lblThirdCustomizeFilter
			// 
			this->lblThirdCustomizeFilter->AutoSize = true;
			this->lblThirdCustomizeFilter->Location = System::Drawing::Point(901, 487);
			this->lblThirdCustomizeFilter->Name = L"lblThirdCustomizeFilter";
			this->lblThirdCustomizeFilter->Size = System::Drawing::Size(145, 17);
			this->lblThirdCustomizeFilter->TabIndex = 12;
			this->lblThirdCustomizeFilter->Text = L"Third Customize Filter";
			// 
			// lblSecondCustomizeFilter
			// 
			this->lblSecondCustomizeFilter->AutoSize = true;
			this->lblSecondCustomizeFilter->Location = System::Drawing::Point(453, 487);
			this->lblSecondCustomizeFilter->Name = L"lblSecondCustomizeFilter";
			this->lblSecondCustomizeFilter->Size = System::Drawing::Size(160, 17);
			this->lblSecondCustomizeFilter->TabIndex = 11;
			this->lblSecondCustomizeFilter->Text = L"Second Customize Filter";
			// 
			// lblFirstCustomizeFilter
			// 
			this->lblFirstCustomizeFilter->AutoSize = true;
			this->lblFirstCustomizeFilter->Location = System::Drawing::Point(8, 487);
			this->lblFirstCustomizeFilter->Name = L"lblFirstCustomizeFilter";
			this->lblFirstCustomizeFilter->Size = System::Drawing::Size(139, 17);
			this->lblFirstCustomizeFilter->TabIndex = 10;
			this->lblFirstCustomizeFilter->Text = L"First Customize Filter";
			// 
			// picSobelFilter
			// 
			this->picSobelFilter->Location = System::Drawing::Point(904, 284);
			this->picSobelFilter->Name = L"picSobelFilter";
			this->picSobelFilter->Size = System::Drawing::Size(400, 200);
			this->picSobelFilter->TabIndex = 18;
			this->picSobelFilter->TabStop = false;
			// 
			// picCannyFilter
			// 
			this->picCannyFilter->Location = System::Drawing::Point(456, 284);
			this->picCannyFilter->Name = L"picCannyFilter";
			this->picCannyFilter->Size = System::Drawing::Size(400, 200);
			this->picCannyFilter->TabIndex = 17;
			this->picCannyFilter->TabStop = false;
			// 
			// picLaplacianFilter
			// 
			this->picLaplacianFilter->Location = System::Drawing::Point(8, 284);
			this->picLaplacianFilter->Name = L"picLaplacianFilter";
			this->picLaplacianFilter->Size = System::Drawing::Size(400, 200);
			this->picLaplacianFilter->TabIndex = 16;
			this->picLaplacianFilter->TabStop = false;
			// 
			// picBlurFilter
			// 
			this->picBlurFilter->Location = System::Drawing::Point(904, 61);
			this->picBlurFilter->Name = L"picBlurFilter";
			this->picBlurFilter->Size = System::Drawing::Size(400, 200);
			this->picBlurFilter->TabIndex = 15;
			this->picBlurFilter->TabStop = false;
			// 
			// picHistogramBalance
			// 
			this->picHistogramBalance->Location = System::Drawing::Point(456, 61);
			this->picHistogramBalance->Name = L"picHistogramBalance";
			this->picHistogramBalance->Size = System::Drawing::Size(400, 200);
			this->picHistogramBalance->TabIndex = 14;
			this->picHistogramBalance->TabStop = false;
			// 
			// picBasicFilterSrcImg
			// 
			this->picBasicFilterSrcImg->Location = System::Drawing::Point(8, 61);
			this->picBasicFilterSrcImg->Name = L"picBasicFilterSrcImg";
			this->picBasicFilterSrcImg->Size = System::Drawing::Size(400, 200);
			this->picBasicFilterSrcImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBasicFilterSrcImg->TabIndex = 13;
			this->picBasicFilterSrcImg->TabStop = false;
			// 
			// lblSobelFilter
			// 
			this->lblSobelFilter->AutoSize = true;
			this->lblSobelFilter->Location = System::Drawing::Point(901, 264);
			this->lblSobelFilter->Name = L"lblSobelFilter";
			this->lblSobelFilter->Size = System::Drawing::Size(79, 17);
			this->lblSobelFilter->TabIndex = 9;
			this->lblSobelFilter->Text = L"Sobel Filter";
			// 
			// lblCannyFilter
			// 
			this->lblCannyFilter->AutoSize = true;
			this->lblCannyFilter->Location = System::Drawing::Point(453, 264);
			this->lblCannyFilter->Name = L"lblCannyFilter";
			this->lblCannyFilter->Size = System::Drawing::Size(83, 17);
			this->lblCannyFilter->TabIndex = 8;
			this->lblCannyFilter->Text = L"Canny Filter";
			// 
			// lblLaplacianFilter
			// 
			this->lblLaplacianFilter->AutoSize = true;
			this->lblLaplacianFilter->Location = System::Drawing::Point(8, 264);
			this->lblLaplacianFilter->Name = L"lblLaplacianFilter";
			this->lblLaplacianFilter->Size = System::Drawing::Size(104, 17);
			this->lblLaplacianFilter->TabIndex = 7;
			this->lblLaplacianFilter->Text = L"Laplacian Filter";
			// 
			// lblBlurFilter
			// 
			this->lblBlurFilter->AutoSize = true;
			this->lblBlurFilter->Location = System::Drawing::Point(901, 41);
			this->lblBlurFilter->Name = L"lblBlurFilter";
			this->lblBlurFilter->Size = System::Drawing::Size(68, 17);
			this->lblBlurFilter->TabIndex = 6;
			this->lblBlurFilter->Text = L"Blur Filter";
			// 
			// lblHistogramBalance
			// 
			this->lblHistogramBalance->AutoSize = true;
			this->lblHistogramBalance->Location = System::Drawing::Point(453, 41);
			this->lblHistogramBalance->Name = L"lblHistogramBalance";
			this->lblHistogramBalance->Size = System::Drawing::Size(126, 17);
			this->lblHistogramBalance->TabIndex = 5;
			this->lblHistogramBalance->Text = L"Histogram balance";
			this->lblHistogramBalance->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblBasicFilterSrcImg
			// 
			this->lblBasicFilterSrcImg->AutoSize = true;
			this->lblBasicFilterSrcImg->Location = System::Drawing::Point(8, 41);
			this->lblBasicFilterSrcImg->Name = L"lblBasicFilterSrcImg";
			this->lblBasicFilterSrcImg->Size = System::Drawing::Size(95, 17);
			this->lblBasicFilterSrcImg->TabIndex = 4;
			this->lblBasicFilterSrcImg->Text = L"Source Image";
			// 
			// btnBasicFilterLoadImage
			// 
			this->btnBasicFilterLoadImage->Location = System::Drawing::Point(6, 6);
			this->btnBasicFilterLoadImage->Name = L"btnBasicFilterLoadImage";
			this->btnBasicFilterLoadImage->Size = System::Drawing::Size(105, 32);
			this->btnBasicFilterLoadImage->TabIndex = 3;
			this->btnBasicFilterLoadImage->Text = L"Load image";
			this->btnBasicFilterLoadImage->UseVisualStyleBackColor = true;
			this->btnBasicFilterLoadImage->Click += gcnew System::EventHandler(this, &FiltersForm::btnBasicFilterLoadImage_Click);
			// 
			// tabPageDetectLineCircle
			// 
			this->tabPageDetectLineCircle->Controls->Add(this->picResultImage);
			this->tabPageDetectLineCircle->Controls->Add(this->picDetectLineCircleSrcImg);
			this->tabPageDetectLineCircle->Controls->Add(this->lblResultImage);
			this->tabPageDetectLineCircle->Controls->Add(this->lblDetectLineCircleSrcImg);
			this->tabPageDetectLineCircle->Controls->Add(this->btnDetectLineCircleLoadImage);
			this->tabPageDetectLineCircle->Location = System::Drawing::Point(4, 25);
			this->tabPageDetectLineCircle->Name = L"tabPageDetectLineCircle";
			this->tabPageDetectLineCircle->Padding = System::Windows::Forms::Padding(3);
			this->tabPageDetectLineCircle->Size = System::Drawing::Size(1316, 717);
			this->tabPageDetectLineCircle->TabIndex = 2;
			this->tabPageDetectLineCircle->Text = L"Detect Line Circle";
			this->tabPageDetectLineCircle->UseVisualStyleBackColor = true;
			// 
			// picResultImage
			// 
			this->picResultImage->Location = System::Drawing::Point(456, 61);
			this->picResultImage->Name = L"picResultImage";
			this->picResultImage->Size = System::Drawing::Size(848, 531);
			this->picResultImage->TabIndex = 19;
			this->picResultImage->TabStop = false;
			// 
			// picDetectLineCircleSrcImg
			// 
			this->picDetectLineCircleSrcImg->Location = System::Drawing::Point(8, 61);
			this->picDetectLineCircleSrcImg->Name = L"picDetectLineCircleSrcImg";
			this->picDetectLineCircleSrcImg->Size = System::Drawing::Size(400, 200);
			this->picDetectLineCircleSrcImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picDetectLineCircleSrcImg->TabIndex = 18;
			this->picDetectLineCircleSrcImg->TabStop = false;
			// 
			// lblResultImage
			// 
			this->lblResultImage->AutoSize = true;
			this->lblResultImage->Location = System::Drawing::Point(453, 41);
			this->lblResultImage->Name = L"lblResultImage";
			this->lblResultImage->Size = System::Drawing::Size(90, 17);
			this->lblResultImage->TabIndex = 17;
			this->lblResultImage->Text = L"Result Image";
			this->lblResultImage->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblDetectLineCircleSrcImg
			// 
			this->lblDetectLineCircleSrcImg->AutoSize = true;
			this->lblDetectLineCircleSrcImg->Location = System::Drawing::Point(8, 41);
			this->lblDetectLineCircleSrcImg->Name = L"lblDetectLineCircleSrcImg";
			this->lblDetectLineCircleSrcImg->Size = System::Drawing::Size(95, 17);
			this->lblDetectLineCircleSrcImg->TabIndex = 16;
			this->lblDetectLineCircleSrcImg->Text = L"Source Image";
			// 
			// btnDetectLineCircleLoadImage
			// 
			this->btnDetectLineCircleLoadImage->Location = System::Drawing::Point(6, 6);
			this->btnDetectLineCircleLoadImage->Name = L"btnDetectLineCircleLoadImage";
			this->btnDetectLineCircleLoadImage->Size = System::Drawing::Size(105, 32);
			this->btnDetectLineCircleLoadImage->TabIndex = 15;
			this->btnDetectLineCircleLoadImage->Text = L"Load image";
			this->btnDetectLineCircleLoadImage->UseVisualStyleBackColor = true;
			this->btnDetectLineCircleLoadImage->Click += gcnew System::EventHandler(this, &FiltersForm::btnDetectLineCircleLoadImage_Click);
			// 
			// FiltersForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1320, 742);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"FiltersForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Image filter, detect line, cycle image";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &FiltersForm::FiltersForm_FormClosed);
			this->tabControl1->ResumeLayout(false);
			this->tabPageBasicFilter->ResumeLayout(false);
			this->tabPageBasicFilter->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picThirdCustomizeFilter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSecondCustomizeFilter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picFirstCustomizeFilter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSobelFilter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picCannyFilter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picLaplacianFilter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBlurFilter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHistogramBalance))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBasicFilterSrcImg))->EndInit();
			this->tabPageDetectLineCircle->ResumeLayout(false);
			this->tabPageDetectLineCircle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picResultImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picDetectLineCircleSrcImg))->EndInit();
			this->ResumeLayout(false);

		}
		#pragma endregion

	private: System::Void FiltersForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
	{
		this->Hide();
		mainForm->Show();
	}
	private: System::Void btnBasicFilterLoadImage_Click(System::Object^  sender, System::EventArgs^  e) {
		Mat src, resizeimage;
		OpenFileDialog^ opDialog = gcnew OpenFileDialog();
		opDialog->Filter = "Image(*.bmp; *.jpg)|*.bmp;*.jpg|All files (*.*)|*.*||";
		if (opDialog->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
		{
			return;
		}
		Bitmap^ bmpSrc = gcnew Bitmap(opDialog->FileName);
		picBasicFilterSrcImg->Image = bmpSrc;
		picBasicFilterSrcImg->Refresh();
		//load image into src variable and show as OpenCV method.
		src = imread(ConvertString2Char(opDialog->FileName));	//We need to convert file name to char by Marchal method
															//imshow("Source image showing via OpenCV", src);
		resizeimage = ToResize(src); //resizeimage

		Mat histogram_balance_img, blur_img, laplacian_img, canny_img, sobel_img,cuz1_img,cuz2_img,cuz3_img;

		histogram_balance_img = HistogramBalance(src);
		blur_img = BlurFilter(src);
		laplacian_img = LaplacianFilter(src);
		canny_img = CannyFilter(src);
		sobel_img = SobelFilter(src);

		//For the Customize filters we need define the Filter Matrix
		double m[3][3] = { -1,-1, 0,
						   -1, 0, 1,
							0, 1, 1 };
		double m2[3][3] = { 1, 1, 1,
							1,-7, 1,
							1, 1, 1 };
		double m3[3][3] = {-1,-1,-1,
						   -1, 8,-1,
						   -1,-1,-1 };
		//
		cuz1_img = CuzFilter(src, m);
		cuz2_img = CuzFilter(src, m2);
		cuz3_img = CuzFilter(src, m3);

		DrawCVImage(picBlurFilter, blur_img);
		//imshow("Blur Filter", blur_img);

		DrawCVImage(picHistogramBalance, histogram_balance_img);
		//imshow("Histogram Balance", histogram_balance_img);

		DrawCVImage(picLaplacianFilter, laplacian_img);
		//imshow("Laplacian Filter", laplacian_img);

		DrawCVImage(picCannyFilter, canny_img);
		//imshow("Canny Filter", canny_img);
			
		DrawCVImage(picSobelFilter, sobel_img);
		//imshow("Sobel Filter", sobel_img);

		DrawCVImage(picFirstCustomizeFilter, cuz1_img);
		//imshow("First Customize Filter", cuz1_img);

		DrawCVImage(picSecondCustomizeFilter, cuz2_img);
		//imshow("Second Customize Filter", cuz2_img);

		DrawCVImage(picThirdCustomizeFilter, cuz3_img);
		//imshow("Third Customize Filter", cuz3_img);
	}

	private: char* ConvertString2Char(System::String^ str)
	{	//Marshal method
		char* str2 = (char*)(void*)Marshal::StringToHGlobalAnsi(str);
		return str2;
	}
	private: void DrawCVImage(System::Windows::Forms::Control^ control, cv::Mat& colorImage)
	{
		System::Drawing::Graphics^ graphics = control->CreateGraphics();
		System::IntPtr ptr(colorImage.ptr());
		System::Drawing::Bitmap^ b;
		switch (colorImage.type())
		{
		case CV_8UC3: //non-grayscale images are correctly displayed here
			b = gcnew System::Drawing::Bitmap(colorImage.cols, colorImage.rows, colorImage.step,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
			break;
		case CV_8UC1: //grayscale images are incorrectly displayed here
			b = gcnew System::Drawing::Bitmap(colorImage.cols, colorImage.rows, colorImage.step,
				System::Drawing::Imaging::PixelFormat::Format8bppIndexed, ptr);
			break;
		default:
			//error message				
			break;
		}
		System::Drawing::RectangleF rect(0, 0, (float)control->Width, (float)control->Height);
		graphics->DrawImage(b, rect);		
	}
	private: cv::Mat HistogramBalance(Mat inputMat)
	{
		Mat hsv, disp;
		cvtColor(inputMat, hsv, CV_BGR2HSV); //Convert BGR to HSV
		vector<Mat> hsv_channels;
		split(hsv, hsv_channels);			 //Get the V channel
		equalizeHist(hsv_channels[2], hsv_channels[2]); //Balance V channel
		merge(hsv_channels, hsv);	//merge V channel into hsv image
		cvtColor(hsv, disp, CV_HSV2BGR);	//Convert back to BGR image
		convertScaleAbs(disp, disp);
		return disp;
	}
	private: cv::Mat BlurFilter(Mat inputMat)
	{
		Mat dst;
		blur(inputMat, dst, cv::Size(3, 3));
		return dst;
	}
	private: cv::Mat LaplacianFilter(Mat inputMat)
	{
		Mat dst,dst2;
		Laplacian(inputMat, dst, CV_64F);
		convertScaleAbs(dst, dst2);
		return dst2;
	}
	private: cv::Mat CannyFilter(Mat inputMat)
	{
		Mat dst, dst1,dst2;
		cvtColor(inputMat, dst, CV_BGR2GRAY);
		GaussianBlur(dst, dst, cv::Size(9, 9), 2);
		double t1 = 30, t2 = 200;
		Canny(dst, dst1, t1, t2, 3, false);
		convertScaleAbs(dst1, dst2);
		return dst2;
	}
	private: cv::Mat SobelFilter(Mat inputMat)
	{
		Mat dst, dst2;
		Sobel(inputMat, dst, CV_64F, 1, 1);
		convertScaleAbs(dst, dst2);
		return dst2;
	}
	private: cv::Mat CuzFilter(Mat inputMat, double m[3][3])
	{
		Mat dst, dst2;
		Mat M = Mat(3, 3, CV_64F, m);
		cv::filter2D(inputMat, dst, inputMat.depth(), M);
		convertScaleAbs(dst, dst2);
		return dst2;
	}
	private: Mat ToResize(Mat src)
	{ // Resize image method
		Mat dst;
		resize(src, dst, cv::Size(320, 240), 0, 0, 1); //we need to define new size onn cv::Size(width, height)
		return dst;
	}			 
	private: System::Void btnDetectLineCircleLoadImage_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Mat src, resizeimage;
			 OpenFileDialog^ opDialog = gcnew OpenFileDialog();
			 opDialog->Filter = "Image(*.bmp; *.jpg)|*.bmp;*.jpg|All files (*.*)|*.*||";
			 if (opDialog->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
			 {
				 return;
			 }
			 Bitmap^ bmpSrc = gcnew Bitmap(opDialog->FileName);
			 picDetectLineCircleSrcImg->Image = bmpSrc;
			 picDetectLineCircleSrcImg->Refresh();
			 //load image into src variable and show as OpenCV method.
			 src = imread(ConvertString2Char(opDialog->FileName));	//We need to convert file name to char by Marchal method
																	//imshow("Source image showing via OpenCV", src);
			 resizeimage = ToResize(src); //resizeimage



			 Mat gray;
			 cvtColor(src, gray, CV_BGR2GRAY);
			 GaussianBlur(gray, gray, cv::Size(9, 9), 2, 2);

			 //Find line
			 Mat canny;
			 Canny(gray, canny, 100, 200, 3, false);
			 vector<Vec4i> lines;
			 HoughLinesP(canny, lines, 1, CV_PI / 180, 50, 60, 10);
			 //Find circle
			 vector<Vec3f> circles;
			 HoughCircles(gray, circles, CV_HOUGH_GRADIENT, 1, 100, 200, 100, 0, 0);
			 //Draw circle and ine on image
			 for (int i = 0; i < lines.size(); i++)
			 {
				 Vec4i l = lines[i];
				 line(src, cv::Point(l[0], l[1]), cv::Point(l[2], l[3]), Scalar(0, 0, 255), 2);
			 }
			 for (int i = 0; i < circles.size(); i++)
			 {
				 cv::Point center(cvRound(circles[i][0]), cvRound(circles[i][1]));
				 int radius = cvRound(circles[i][2]);
				 circle(src, center, radius, Scalar(0, 0, 255), 2, 8, 0);
			 }

			 Mat Result;


			 convertScaleAbs(src, Result);
			 DrawCVImage(picResultImage, Result);
	}
};
}
