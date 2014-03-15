#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetWindowShape(720,720);
	ofSetWindowTitle("Generative Design-P_1_0_01");
	ofHideCursor();

	c.setHsb(0,255,255);
	b.setHsb(0,255,255);
	
	savePDF = false;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	if (savePDF){

		ofBeginSaveScreenAsPDF("recording-"+ofGetTimestampString()+".pdf", true);
	}

	float hue = ofMap(mouseX,0,ofGetWidth(),0,255);
	c.setHue(hue);
	ofSetColor(c);
	ofSetRectMode(OF_RECTMODE_CORNER);
	//ofNoFill();

	//ofBackground(mouseY/2,100,100);
	ofRect( 0, 0, ofGetWidth(), ofGetHeight() );

	float antiHue = 255.0 - hue;
	b.setHue(antiHue);
	ofFill();
	ofSetRectMode(OF_RECTMODE_CENTER);
	ofSetColor(b);
	ofRect(ofGetWidth() / 2, ofGetHeight() / 2, ofGetHeight() - mouseY, ofGetHeight() - mouseY );
	
	if (savePDF){
		savePDF = false;
		ofEndSaveScreenAsPDF();
	}

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

	if (key == 'p' || key == 'P'){
		savePDF = true;
	}
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
