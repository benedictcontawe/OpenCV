#pragma once
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include <opencv2/imgproc/imgproc.hpp> // we need add one more lib file imgproc
#include "FiltersForm.h"
#include <iostream>
#include <exception>

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
	Mat src;	//Need to create a Mat type for the src image.
	
	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  picSource;
	private: System::Windows::Forms::Label^  lblSourceImage;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::Button^  btnProcess;
	private: System::Windows::Forms::Button^  btnBrowse;
	private: System::Windows::Forms::Label^  lbl90DegreeRotateImage;
	private: System::Windows::Forms::Label^  lblSizeLeft;
	private: System::Windows::Forms::Label^  lblSizeRight;
	private: System::Windows::Forms::PictureBox^  picGrayImage;
	private: System::Windows::Forms::PictureBox^  pic90DegreeRotateImage;
	private: System::Windows::Forms::PictureBox^  picBinaryImage;
	private: System::Windows::Forms::PictureBox^  picAdaptiveBinaryImage;
	private: System::Windows::Forms::PictureBox^  picHistogramRed;
	private: System::Windows::Forms::PictureBox^  picHistogramBlue;
	private: System::Windows::Forms::Label^  lblGrayImage;
	private: System::Windows::Forms::Label^  lblBinaryImage;
	private: System::Windows::Forms::Label^  lblAdaptiveBinaryImage;
	private: System::Windows::Forms::Label^  lblHistogramRed;
	private: System::Windows::Forms::Label^  lblHistogramBlue;
	private: System::Windows::Forms::Label^  lblHistogramGreen;
	private: System::Windows::Forms::PictureBox^  picHistogramGreen;
	private: System::Windows::Forms::Button^  btnFilterDetectLineCycle;

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
			this->picSource = (gcnew System::Windows::Forms::PictureBox());
			this->lblSourceImage = (gcnew System::Windows::Forms::Label());
			this->btnProcess = (gcnew System::Windows::Forms::Button());
			this->btnBrowse = (gcnew System::Windows::Forms::Button());
			this->lbl90DegreeRotateImage = (gcnew System::Windows::Forms::Label());
			this->lblSizeLeft = (gcnew System::Windows::Forms::Label());
			this->lblSizeRight = (gcnew System::Windows::Forms::Label());
			this->picGrayImage = (gcnew System::Windows::Forms::PictureBox());
			this->pic90DegreeRotateImage = (gcnew System::Windows::Forms::PictureBox());
			this->picBinaryImage = (gcnew System::Windows::Forms::PictureBox());
			this->picAdaptiveBinaryImage = (gcnew System::Windows::Forms::PictureBox());
			this->picHistogramRed = (gcnew System::Windows::Forms::PictureBox());
			this->picHistogramBlue = (gcnew System::Windows::Forms::PictureBox());
			this->lblGrayImage = (gcnew System::Windows::Forms::Label());
			this->lblBinaryImage = (gcnew System::Windows::Forms::Label());
			this->lblAdaptiveBinaryImage = (gcnew System::Windows::Forms::Label());
			this->lblHistogramRed = (gcnew System::Windows::Forms::Label());
			this->lblHistogramBlue = (gcnew System::Windows::Forms::Label());
			this->lblHistogramGreen = (gcnew System::Windows::Forms::Label());
			this->picHistogramGreen = (gcnew System::Windows::Forms::PictureBox());
			this->btnFilterDetectLineCycle = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSource))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picGrayImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic90DegreeRotateImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBinaryImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAdaptiveBinaryImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHistogramRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHistogramBlue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHistogramGreen))->BeginInit();
			this->SuspendLayout();
			// 
			// picSource
			// 
			this->picSource->Location = System::Drawing::Point(12, 80);
			this->picSource->Name = L"picSource";
			this->picSource->Size = System::Drawing::Size(400, 200);
			this->picSource->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picSource->TabIndex = 8;
			this->picSource->TabStop = false;
			// 
			// lblSourceImage
			// 
			this->lblSourceImage->AutoSize = true;
			this->lblSourceImage->Location = System::Drawing::Point(12, 39);
			this->lblSourceImage->Name = L"lblSourceImage";
			this->lblSourceImage->Size = System::Drawing::Size(95, 17);
			this->lblSourceImage->TabIndex = 3;
			this->lblSourceImage->Text = L"Source Image";
			// 
			// btnProcess
			// 
			this->btnProcess->Location = System::Drawing::Point(93, 12);
			this->btnProcess->Name = L"btnProcess";
			this->btnProcess->Size = System::Drawing::Size(75, 24);
			this->btnProcess->TabIndex = 2;
			this->btnProcess->Text = L"Process";
			this->btnProcess->UseVisualStyleBackColor = true;
			this->btnProcess->Click += gcnew System::EventHandler(this, &MainForm::btnProcess_Click);
			// 
			// btnBrowse
			// 
			this->btnBrowse->Location = System::Drawing::Point(12, 12);
			this->btnBrowse->Name = L"btnBrowse";
			this->btnBrowse->Size = System::Drawing::Size(75, 24);
			this->btnBrowse->TabIndex = 1;
			this->btnBrowse->Text = L"Browse";
			this->btnBrowse->UseVisualStyleBackColor = true;
			this->btnBrowse->Click += gcnew System::EventHandler(this, &MainForm::btnBrowse_Click);
			// 
			// lbl90DegreeRotateImage
			// 
			this->lbl90DegreeRotateImage->AutoSize = true;
			this->lbl90DegreeRotateImage->Location = System::Drawing::Point(905, 60);
			this->lbl90DegreeRotateImage->Name = L"lbl90DegreeRotateImage";
			this->lbl90DegreeRotateImage->Size = System::Drawing::Size(163, 17);
			this->lbl90DegreeRotateImage->TabIndex = 7;
			this->lbl90DegreeRotateImage->Text = L"45 Degree Rotate Image";
			// 
			// lblSizeLeft
			// 
			this->lblSizeLeft->AutoSize = true;
			this->lblSizeLeft->Location = System::Drawing::Point(15, 60);
			this->lblSizeLeft->Name = L"lblSizeLeft";
			this->lblSizeLeft->Size = System::Drawing::Size(35, 17);
			this->lblSizeLeft->TabIndex = 4;
			this->lblSizeLeft->Text = L"Size";
			// 
			// lblSizeRight
			// 
			this->lblSizeRight->AutoSize = true;
			this->lblSizeRight->Location = System::Drawing::Point(133, 60);
			this->lblSizeRight->Name = L"lblSizeRight";
			this->lblSizeRight->Size = System::Drawing::Size(35, 17);
			this->lblSizeRight->TabIndex = 5;
			this->lblSizeRight->Text = L"Size";
			// 
			// picGrayImage
			// 
			this->picGrayImage->Location = System::Drawing::Point(482, 80);
			this->picGrayImage->Name = L"picGrayImage";
			this->picGrayImage->Size = System::Drawing::Size(400, 200);
			this->picGrayImage->TabIndex = 9;
			this->picGrayImage->TabStop = false;
			// 
			// pic90DegreeRotateImage
			// 
			this->pic90DegreeRotateImage->Location = System::Drawing::Point(908, 80);
			this->pic90DegreeRotateImage->Name = L"pic90DegreeRotateImage";
			this->pic90DegreeRotateImage->Size = System::Drawing::Size(400, 200);
			this->pic90DegreeRotateImage->TabIndex = 10;
			this->pic90DegreeRotateImage->TabStop = false;
			// 
			// picBinaryImage
			// 
			this->picBinaryImage->Location = System::Drawing::Point(482, 376);
			this->picBinaryImage->Name = L"picBinaryImage";
			this->picBinaryImage->Size = System::Drawing::Size(400, 200);
			this->picBinaryImage->TabIndex = 13;
			this->picBinaryImage->TabStop = false;
			// 
			// picAdaptiveBinaryImage
			// 
			this->picAdaptiveBinaryImage->Location = System::Drawing::Point(908, 376);
			this->picAdaptiveBinaryImage->Name = L"picAdaptiveBinaryImage";
			this->picAdaptiveBinaryImage->Size = System::Drawing::Size(400, 200);
			this->picAdaptiveBinaryImage->TabIndex = 14;
			this->picAdaptiveBinaryImage->TabStop = false;
			// 
			// picHistogramRed
			// 
			this->picHistogramRed->Location = System::Drawing::Point(12, 317);
			this->picHistogramRed->Name = L"picHistogramRed";
			this->picHistogramRed->Size = System::Drawing::Size(400, 66);
			this->picHistogramRed->TabIndex = 16;
			this->picHistogramRed->TabStop = false;
			// 
			// picHistogramBlue
			// 
			this->picHistogramBlue->Location = System::Drawing::Point(12, 416);
			this->picHistogramBlue->Name = L"picHistogramBlue";
			this->picHistogramBlue->Size = System::Drawing::Size(400, 66);
			this->picHistogramBlue->TabIndex = 18;
			this->picHistogramBlue->TabStop = false;
			// 
			// lblGrayImage
			// 
			this->lblGrayImage->AutoSize = true;
			this->lblGrayImage->Location = System::Drawing::Point(479, 60);
			this->lblGrayImage->Name = L"lblGrayImage";
			this->lblGrayImage->Size = System::Drawing::Size(81, 17);
			this->lblGrayImage->TabIndex = 6;
			this->lblGrayImage->Text = L"Gray Image";
			// 
			// lblBinaryImage
			// 
			this->lblBinaryImage->AutoSize = true;
			this->lblBinaryImage->Location = System::Drawing::Point(479, 356);
			this->lblBinaryImage->Name = L"lblBinaryImage";
			this->lblBinaryImage->Size = System::Drawing::Size(90, 17);
			this->lblBinaryImage->TabIndex = 11;
			this->lblBinaryImage->Text = L"Binary Image";
			// 
			// lblAdaptiveBinaryImage
			// 
			this->lblAdaptiveBinaryImage->AutoSize = true;
			this->lblAdaptiveBinaryImage->Location = System::Drawing::Point(905, 356);
			this->lblAdaptiveBinaryImage->Name = L"lblAdaptiveBinaryImage";
			this->lblAdaptiveBinaryImage->Size = System::Drawing::Size(149, 17);
			this->lblAdaptiveBinaryImage->TabIndex = 12;
			this->lblAdaptiveBinaryImage->Text = L"Adaptive Binary Image";
			// 
			// lblHistogramRed
			// 
			this->lblHistogramRed->AutoSize = true;
			this->lblHistogramRed->Location = System::Drawing::Point(9, 297);
			this->lblHistogramRed->Name = L"lblHistogramRed";
			this->lblHistogramRed->Size = System::Drawing::Size(102, 17);
			this->lblHistogramRed->TabIndex = 15;
			this->lblHistogramRed->Text = L"Histogram Red";
			// 
			// lblHistogramBlue
			// 
			this->lblHistogramBlue->AutoSize = true;
			this->lblHistogramBlue->Location = System::Drawing::Point(9, 396);
			this->lblHistogramBlue->Name = L"lblHistogramBlue";
			this->lblHistogramBlue->Size = System::Drawing::Size(104, 17);
			this->lblHistogramBlue->TabIndex = 17;
			this->lblHistogramBlue->Text = L"Histogram Blue";
			// 
			// lblHistogramGreen
			// 
			this->lblHistogramGreen->AutoSize = true;
			this->lblHistogramGreen->Location = System::Drawing::Point(9, 490);
			this->lblHistogramGreen->Name = L"lblHistogramGreen";
			this->lblHistogramGreen->Size = System::Drawing::Size(116, 17);
			this->lblHistogramGreen->TabIndex = 19;
			this->lblHistogramGreen->Text = L"Histogram Green";
			// 
			// picHistogramGreen
			// 
			this->picHistogramGreen->Location = System::Drawing::Point(12, 510);
			this->picHistogramGreen->Name = L"picHistogramGreen";
			this->picHistogramGreen->Size = System::Drawing::Size(400, 66);
			this->picHistogramGreen->TabIndex = 20;
			this->picHistogramGreen->TabStop = false;
			// 
			// btnFilterDetectLineCycle
			// 
			this->btnFilterDetectLineCycle->Location = System::Drawing::Point(174, 12);
			this->btnFilterDetectLineCycle->Name = L"btnFilterDetectLineCycle";
			this->btnFilterDetectLineCycle->Size = System::Drawing::Size(342, 24);
			this->btnFilterDetectLineCycle->TabIndex = 21;
			this->btnFilterDetectLineCycle->Text = L"Image filter functions and line,cirle detect functions.";
			this->btnFilterDetectLineCycle->UseVisualStyleBackColor = true;
			this->btnFilterDetectLineCycle->Click += gcnew System::EventHandler(this, &MainForm::btnFilterDetectLineCycle_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1320, 627);
			this->Controls->Add(this->btnFilterDetectLineCycle);
			this->Controls->Add(this->lblHistogramGreen);
			this->Controls->Add(this->picHistogramGreen);
			this->Controls->Add(this->lblHistogramBlue);
			this->Controls->Add(this->lblHistogramRed);
			this->Controls->Add(this->lblAdaptiveBinaryImage);
			this->Controls->Add(this->lblBinaryImage);
			this->Controls->Add(this->lblGrayImage);
			this->Controls->Add(this->picHistogramBlue);
			this->Controls->Add(this->picHistogramRed);
			this->Controls->Add(this->picAdaptiveBinaryImage);
			this->Controls->Add(this->picBinaryImage);
			this->Controls->Add(this->pic90DegreeRotateImage);
			this->Controls->Add(this->picGrayImage);
			this->Controls->Add(this->lblSizeRight);
			this->Controls->Add(this->lblSizeLeft);
			this->Controls->Add(this->lbl90DegreeRotateImage);
			this->Controls->Add(this->picSource);
			this->Controls->Add(this->lblSourceImage);
			this->Controls->Add(this->btnProcess);
			this->Controls->Add(this->btnBrowse);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Open CV 3.3.0";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSource))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picGrayImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic90DegreeRotateImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBinaryImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAdaptiveBinaryImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHistogramRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHistogramBlue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHistogramGreen))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
	private: System::Void btnBrowse_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//Load image from PC & show into picture box
		OpenFileDialog^ dgOpen = gcnew OpenFileDialog();
		dgOpen->Filter = "Image(*.bmp; *.jpg)|*.bmp;*.jpg|All files (*.*)|*.*||";
		if (dgOpen->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
		{
			return;
		}
		Bitmap^ bmpSrc = gcnew Bitmap(dgOpen->FileName);		
		picSource->Image = bmpSrc;
		picSource->Refresh();

		//load image into src variable and show as OpenCV method.
		src = imread(ConvertString2Char(dgOpen->FileName));	//We need to convert file name to char by Marchal method
		//imshow("Source image showing via OpenCV", src);
	}

	private: char* ConvertString2Char(System::String^ str)

	{	//Marshal method
		char* str2 = (char*)(void*)Marshal::StringToHGlobalAnsi(str);
		return str2;
	}

	private: System::Void btnProcess_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//try 
		//{
			// All image process will deploy after click this button.
			Mat gray;
			Mat	red;
			Mat	blue;
			Mat	green;
			Mat	rotate;
			Mat	binary;
			Mat	adaptivebinary;
			Mat	resizeimage;

			//throw 1;
			resizeimage = ToResize(src);
			//imshow("src", src);			

			//throw 2;
			gray = ToGray(src); //Convert to gray		
			//imshow("Gray", gray);
			DrawCVImage(picGrayImage, gray, false);// show on the picturebox
			
			//throw 3;
			binary = ToBinary(gray);;
			//imshow("Binary", binary);
			DrawCVImage(picBinaryImage, binary, false);
			
			//throw 4;
			adaptivebinary = ToAdaptiveBinary(gray);
			//imshow("Adaptive Binary", adaptivebinary);
			DrawCVImage(picAdaptiveBinaryImage, adaptivebinary, false);
			
			//throw 5;
			//Now goto show rotate image
			rotate = ToRotate(resizeimage, 45, 1); // Angle = 45 degree and Zoom scale = 1
			//imshow("Rotate", rotate);
			DrawCVImage(pic90DegreeRotateImage, rotate, false);
			
			//throw 6;
			//Finally goto show histogram
			red = ToHistogram(resizeimage)[0];
			green = ToHistogram(resizeimage)[1];
			blue = ToHistogram(resizeimage)[2];
			DrawCVImage(picHistogramRed, red, false);
			DrawCVImage(picHistogramGreen, green, false);
			DrawCVImage(picHistogramBlue, blue, false);			
		//}

		//catch (...)	{	}
		//catch (Exception ^ex)
		//{
		//	MessageBox::Show(ex->Message);
		//}
	}

	private: Mat ToGray(Mat x) 
	{ //Convert color image to gray
		Mat dst;
		//cvtColor(x, dst, CV_RGB2BGRA); //You can check all detail method by move over mouse to the cvtColor method. Same with other methods.

		//cvtColor(x, dst, CV_BGR2GRAY, 0);

		cvtColor(x, dst, CV_RGB2GRAY);		

		return dst; //after convert return destination image.
	}
	private: Mat ToBinary(Mat x) 
	{
		Mat dst;
		threshold(x, dst, 100, 255, CV_THRESH_BINARY);
		return dst;
	}
	private: Mat ToAdaptiveBinary(Mat x) 
	{
		Mat dst;
		adaptiveThreshold(x, dst, 255, CV_ADAPTIVE_THRESH_MEAN_C, CV_THRESH_BINARY, 35, 5); // use AdaptiveThreshold -> convert quality performance much better.
		return dst;
	}
	private: Mat ToResize(Mat x) 
	{ // Resize image method
		Mat dst;
		resize(x, dst, cv:: Size(320, 240), 0, 0, 1); //we need to define new size onn cv::Size(width, height)
		return dst;
	}
	private: Mat ToRotate(Mat x, double angle, double scale) 
	{ // Rotate image with center poit define: Point2f center(src.cols / 2, src / 2);
		Mat dst;
		Point2f center(x.cols / 2, x.rows / 2);
		Mat mat_rot = getRotationMatrix2D(center, angle, scale); // create a matrix with center point, angle & scale as defination
		warpAffine(x, dst, mat_rot, x.size());
		return dst;
	}
	private: vector<Mat> ToHistogram(Mat x) 
	{ // This method will draw histogram of 3 colours R,G,B
		vector<Mat> result;
		vector<Mat> img_rgb;
		Mat img_r,img_g, img_b;
		int chart_w = 400;
		int chart_h = 400;
		int size_histogram = 255;
		float range[] = { 0, 255 };
		const float* hist_range = { range };
		split(x, img_rgb); // Devide colour image to separate rgb image.
		calcHist(&img_rgb[0], 1, 0, Mat(), img_b, 1, &size_histogram, &hist_range, true, false); // Get the histogram date per colour into img_b matrix.
		calcHist(&img_rgb[1], 1, 0, Mat(), img_g, 1, &size_histogram, &hist_range, true, false);
		calcHist(&img_rgb[2], 1, 0, Mat(), img_r, 1, &size_histogram, &hist_range, true, false);
		int bin = cvRound((double)chart_w / size_histogram);

		// Then we draw historam here
		Mat disp_r(chart_w, chart_h, CV_8UC3, Scalar ( 255, 255, 255));
		Mat disp_g = disp_r.clone();
		Mat disp_b = disp_r.clone();

		normalize(img_b, img_r, 0, disp_b.rows, NORM_MINMAX, -1, Mat());
		normalize(img_g, img_g, 0, disp_b.rows, NORM_MINMAX, -1, Mat());
		normalize(img_r, img_b, 0, disp_b.rows, NORM_MINMAX, -1, Mat());

		for (int i = 1; i < 255; i++)
		{
			line(disp_r, cv::Point(bin*(i), chart_h), cv::Point(bin*(i), chart_h - cvRound(img_r.at<float>(i))),
				Scalar(0, 0, 255), 2, 8, 0);
			line(disp_g, cv::Point(bin*(i), chart_h), cv::Point(bin*(i), chart_h - cvRound(img_g.at<float>(i))),
				Scalar(0, 255, 0), 2, 8, 0);
			line(disp_b, cv::Point(bin*(i), chart_h), cv::Point(bin*(i), chart_h - cvRound(img_b.at<float>(i))),
				Scalar(255, 0, 0), 2, 8, 0);
		}

		// Push all 3 colours to the result variable
		result.push_back(disp_r);
		result.push_back(disp_g);
		result.push_back(disp_b);
		return result;
	}

	private: void DrawCVImage(System::Windows::Forms::Control^ control, cv::Mat& colorImage, Boolean GrayScale)
	{
		if (!GrayScale) {
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
		else {
			System::Drawing::Graphics^ graphics = control->CreateGraphics();
			System::IntPtr ptr(colorImage.ptr());
			System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(colorImage.size().width, colorImage.size().height, colorImage.step,
				System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
			System::Drawing::RectangleF rect(0, 0, (float)control->Width, (float)control->Height);
			graphics->DrawImage(b, rect);
		}
	}

	private: System::Void btnFilterDetectLineCycle_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		FiltersForm ^ filtersform = gcnew FiltersForm(this);
		filtersform->Show();
		this->Hide();
	}

};
}
