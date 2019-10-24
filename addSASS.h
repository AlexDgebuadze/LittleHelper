/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   addSASS.h
 * Author: alex
 *
 * Created on September 26, 2019, 12:12 AM
 */

#ifndef ADDSASS_H
#define ADDSASS_H





#include <iostream>
#include "FileMan.h"


using namespace std;


void setupSASS(string appDest, string installDest){
    string gulpfileContent = "'use strict';var gulp = require('gulp');var sass = require('gulp-sass'); gulp.task('sass', function () {return gulp.src('scss/style.scss') .pipe(sass().on('error', sass.logError)) .pipe(gulp.dest('styles'));}); gulp.task('watch', function () {gulp.watch('scss/*.scss',gulp.parallel('sass'));});";
    string resetContent = "html, body, div, span, applet, object, iframe, h1, h2, h3, h4, h5, h6, p, blockquote, pre, a, abbr, acronym, address, big, cite, code, del, dfn, em, img, ins, kbd, q, s, samp, small, strike, strong, sub, sup, tt, var, b, u, i, center, dl, dt, dd, ol, ul, li, fieldset, form, label, legend, table, caption, tbody, tfoot, thead, tr, th, td, article, aside, canvas, details, embed, figure, figcaption, footer, header, hgroup, menu, nav, output, ruby, section, summary, time, mark, audio, video {margin: 0; padding: 0; border: 0;font-size: 100%;font: inherit;vertical-align: baseline; } article, aside, details, figcaption, figure, footer, header, hgroup, menu, nav, section {display: block; } body{line-height:1;} ol,ul{list-style:none;} blockquote {&:before, &:after {content: '';content: none; } } q {&:before, &:after {content: '';content: none; } } table {border-collapse: collapse;border-spacing: 0; }";
    
    //mixins :
    string Mixins = "@mixin paddingLR($left,$right){padding-left: $left;padding-right: $right;} @mixin paddingTB($top,$bottom) {padding-top: $top;padding-bottom: $bottom;} @mixin marginLR($left,$right) {margin-left: $left;margin-right: $right;} @mixin marginTB($top,$bottom) {margin-top: $top;margin-bottom: $bottom;} @mixin flex ($justify-content, $align-items) {justify-content: $justify-content;align-items: $align-items;} @mixin border ($size, $type, $color) {border:$size $type $color;}";

    

    CreateFile("","gulpfile","js",gulpfileContent);
    CreateDictionary("","scss");
    CreateFile(installDest + "/scss","style","scss","@import 'starter/reset';");
    CreateDictionary(installDest + "/scss","base");
    CreateDictionary(installDest + "/scss","module");
    CreateFile(installDest + "/scss/module","Mixins","scss",Mixins);
    CreateDictionary(installDest+"/scss","starter");
    CreateFile(installDest + "/scss/starter","reset","css",resetContent);
    
   
  
    ChangeDirectory(appDest);
    system("./InstallSASS.sh");
    
    
    

}
#endif /* ADDSASS_H */
