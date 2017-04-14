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
    
//    ofSetCircleResolution(100);
//    
//    ofSetColor(255);
//    
//    float radius = ofMap(mouseX, 0, ofGetWidth(), 100, 300, true);
//    
//    ofSetColor(ofMap(sin(ofGetElapsedTimef()), -1, 1, 0, 255));
//
//    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, radius);
//    
    
    for (int i = 0; i < 300; i++){
        
        float angle = ofMap(i, 0, 300, 0, TWO_PI);
        
         float innerRadius = 200 + 50 * sin(ofMap(i, 0, 300, 0, TWO_PI*7));
        
        float outerRadius = 250 + 50 * sin(ofMap(i, 0, 300, 0, TWO_PI*10));
        float x = 300 + innerRadius * cos(angle);
        float y = 300 + innerRadius * sin(angle);
        float x2 = 300 + outerRadius * cos(angle);
        float y2 = 300 + outerRadius * sin(angle);
        ofDrawLine(x,y,x2,y2);
        
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
