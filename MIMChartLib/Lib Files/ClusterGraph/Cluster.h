/*
 Copyright (C) 2011  Reetu Raj (reetu.raj@gmail.com)
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *///
//  Cluster.h
//  MIMChartLib
//
//  Created by Reetu Raj on 17/08/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum 
{

    DOTS=1,
    SQUARE,
    
}Clusterstyle;

@interface Cluster : UIView {
    
    Clusterstyle style; 
    float radius;
    BOOL shadow;
    UIColor *color;

}

@property(nonatomic,assign) Clusterstyle style;
@property(nonatomic,assign) float radius;
@property(nonatomic,assign) BOOL shadow;
@property(nonatomic,retain) UIColor *color;

@end
