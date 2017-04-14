#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);

    for (int i = 0; i < 500; i++){
        float scale = ofMap(mouseX, 0, ofGetWidth(), 0.001, 0.8);
        float add = ofSignedNoise(i*scale, ofGetElapsedTimef()*0.1) * 50;
        ofDrawRectangle(i*2, ofGetHeight()/2 + add, 2, 2);
    }
    
//    for (int i = 0; i < 1000; i++){
//        
//        float x = ofSignedNoise(i*0.01, ofGetElapsedTimef()*0.1) * 400 + 400;
//        float y = ofSignedNoise(i*0.01 + 10000, ofGetElapsedTimef()*0.1) * 400 + 400;
//        ofDrawCircle(x,y,5);
//        
//        
//    }
    
    
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
