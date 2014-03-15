#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetWindowShape(800,800);
	ofSetWindowTitle("Generative Design-P_1_1_2_01");
	
	ofBackground(255);
	segmentCount = 360;
	radius = 300;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	float angleStep;
	angleStep = 360 / segmentCount;

	
	
	
	for (float angle=0; angle<=360; angle+=angleStep){

		x1 = ofGetWidth()/2 + cos(ofDegToRad(angle))*radius;
		y1 = ofGetHeight()/2 + sin(ofDegToRad(angle))*radius;

		x2 = ofGetWidth()/2 + cos(ofDegToRad(angle+angleStep))*radius;
		y2 = ofGetHeight()/2 + sin(ofDegToRad(angle+angleStep))*radius;
		
		color.setHsb( 255.0 / 360 * angle, 255.0 / ofGetWidth() * mouseX, 255.0 / ofGetHeight() * mouseY );
		ofSetColor( color );
		ofTriangle( ofGetWidth() / 2, ofGetHeight() / 2,x1, y1,x2,y2);
	}
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

	switch (key){
	case '1':
		segmentCount = 360;
		break;
	case '2':
		segmentCount = 45;
		break;
	case '3':
		segmentCount = 24;
		break;
	case '4':
		segmentCount = 12;
		break;
	case '5':
		segmentCount = 6;
		break;
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
