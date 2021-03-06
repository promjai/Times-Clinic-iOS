//
//  PFFolder2ViewController.h
//  Times Clinic
//
//  Created by Pariwat Promjai on 3/19/2558 BE.
//  Copyright (c) 2558 Pariwat Promjai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DLImageLoader.h"

#import "PFApi.h"

#import "PFFolderCell.h"
#import "PFFolder1ViewController.h"
#import "PFServiceDetailViewController.h"

@protocol PFFolder2ViewControllerDelegate <NSObject>

- (void)PFGalleryViewController:(id)sender sum:(NSMutableArray *)sum current:(NSString *)current;
- (void)PFImageViewController:(id)sender viewPicture:(UIImage *)image;
- (void)PFFolder2ViewControllerBack;

@end

@interface PFFolder2ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (assign, nonatomic) id delegate;
@property (strong, nonatomic) PFApi *Api;
@property (strong, nonatomic) NSMutableArray *arrObj;
@property (strong, nonatomic) NSDictionary *obj;

@property NSUserDefaults *foldertypeOffline;

@property (strong, nonatomic) IBOutlet UIView *waitView;
@property (strong, nonatomic) UIRefreshControl *refreshControl;

@property (weak, nonatomic) IBOutlet UITableView *tableView;

@property (strong, nonatomic) NSString *titlename;
@property (strong, nonatomic) NSString *folder_id;

@property (strong, nonatomic) NSString *paging;
@property (strong, nonatomic) NSString *checkinternet;

@end
