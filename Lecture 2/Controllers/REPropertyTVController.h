//
//  ViewController.h
//  Lecture 2
//
//  Created by Sem Voigtländer on 10/01/2018.
//  Copyright © 2018 Jailed Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface REPropertyTVController : UITableViewController<UITableViewDelegate, UITableViewDataSource>
@property NSString* Class;
@property NSArray* Properties;
@end

