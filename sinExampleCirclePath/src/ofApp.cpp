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
    
    
//    float xOrigin = 300;
//    float yOrigin = 300;
//    float radius = 100;
//    float angle = ofGetElapsedTimef();
//    
//    float x = xOrigin + radius * cos(angle);
//    float y = yOrigin + radius * sin(angle);
//    
//    ofDrawCircle(x,y,20);
    
    
//    for (int i = 0; i < 100; i++){
//        
//        float xOrigin = 300 + sin(ofGetElapsedTimef() + i*0.2) * 200;
//        float yOrigin = 300;
//        float radius = sin(ofGetElapsedTimef() + i*0.1) * 100;
//        float angle = ofGetElapsedTimef() + (i/100.0) * TWO_PI;
//        
//        float x = xOrigin + radius * cos(angle);
//        float y = yOrigin + radius * sin(angle);
//        
//        ofDrawCircle(x,y,2);
//    }
    
    
    for (int i = 0; i < 100; i++){
        
        float xOrigin = 300;
        float yOrigin = 300;
        float radius = 100;
        float angle = ofGetElapsedTimef() + (i/100.0) * TWO_PI;
        
        float x = xOrigin + radius * cos(angle * 3.7);
        float y = yOrigin + radius * sin(angle * 3.8);
        
        ofDrawCircle(x,y,2);
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
