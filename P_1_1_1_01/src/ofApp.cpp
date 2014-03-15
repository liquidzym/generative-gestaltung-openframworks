#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetWindowShape(800,400);
	ofSetWindowTitle("Generative Design-P_1_0_01");
	ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	int stepX = mouseX + 2;
	int stepY = mouseY + 2;

	for (int gridY = 0; gridY < ofGetHeight(); gridY += stepY){

		for (int gridX = 0; gridX < ofGetWidth(); gridX += stepX){

			color.setHsb(255.0 / ofGetWidth() * gridX, 255.0 - 255.0 / ofGetHeight() * gridY, 255);
			ofSetColor(color);
			ofRect(gridX,gridY,stepX,stepY);
		}
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

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
