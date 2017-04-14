#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
//    ofBackground(127 + 127 * sin( ofGetElapsedTimef()) );
//    ofSetColor( 127 + 127 * sin( ofGetElapsedTimef() + PI));
//    ofDrawRectangle(100,100, 1024-200, 768-200);
    
//    ofBackground(0);
//    for (int i = 0; i < 100; i++){
//        ofSetColor(127 + 127 * sin(ofGetElapsedTimef() + i*0.1));
//        ofDrawRectangle(i * 10, 0, 10, 768);
//    }
    
    ofBackground(0);
    
    for (int i = 0; i < 70; i++){
        float pos = ofGetWidth()/2 + sin(ofGetElapsedTimef() * (i*0.1)) * 200;
        ofDrawCircle(pos, i*10, 5);
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
