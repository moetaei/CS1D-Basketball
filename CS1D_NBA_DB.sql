BEGIN TRANSACTION;
CREATE TABLE IF NOT EXISTS "info" (
	"Conference"	STRING NOT NULL,
	"Division"	STRING NOT NULL,
	"TeamName"	STRING NOT NULL,
	"Location"	STRING NOT NULL,
	"ArenaName"	STRING NOT NULL,
	"StadiumCapacity"	INTEGER NOT NULL,
	"JoinedLeague"	INTEGER NOT NULL,
	"Coach"	STRING NOT NULL
);
CREATE TABLE IF NOT EXISTS "distances" (
	"Team1"	STRING NOT NULL,
	"Arena1"	STRING NOT NULL,
	"Team2"	STRING NOT NULL,
	"Arena2"	STRING NOT NULL,
	"Distance"	FLOAT NOT NULL
);
INSERT INTO "info" VALUES ('Eastern','Atlantic','Boston Celtics','Boston, Massachusetts','TD Garden','18,624',1946,'Brad Stevens');
INSERT INTO "info" VALUES ('Eastern','Atlantic','Brooklyn Nets','New York City, New York','Barclays Center','17,732',1976,'Kenny Atkinson');
INSERT INTO "info" VALUES ('Eastern','Atlantic','New York Knicks','New York City, New York','Madison Square Garden','19,812',1946,'David Fizdale');
INSERT INTO "info" VALUES ('Eastern','Atlantic','Philadelphia 76ers','Philadelphia, Pennsylvania','Wells Fargo Center','21,600',1949,'Brett Brown');
INSERT INTO "info" VALUES ('Eastern','Atlantic','Toronto Raptors','Toronto, Ontario','Scotiabank Arena','19,800',1995,'Nick Nurse');
INSERT INTO "info" VALUES ('Eastern','Central','Chicago Bulls','Chicago, Illinois','United Center','20,917',1966,'Jim Boylen');
INSERT INTO "info" VALUES ('Eastern','Central','Cleveland Cavaliers','Cleveland, Ohio','Quicken Loans Arena','20,562',1970,'John Beilein');
INSERT INTO "info" VALUES ('Eastern','Central','Detroit Pistons','Detroit, Michigan','Little Caesars Arena','20,491',1948,'Dwane Casey');
INSERT INTO "info" VALUES ('Eastern','Central','Indiana Pacers','Indianapolis, Indiana','Bankers Life Fieldhouse','17,923',1976,'Nate McMillan');
INSERT INTO "info" VALUES ('Eastern','Central','Milwaukee Bucks','Milwaukee, Wisconsin','Fiserv Forum','18,717',1968,'Mike Budenholzer');
INSERT INTO "info" VALUES ('Eastern','Southeast','Atlanta Hawks','Atlanta, Georgia','State Farm Arena','15,711',1949,'Lloyd Pierce');
INSERT INTO "info" VALUES ('Eastern','Southeast','Charlotte Hornets','Charlotte, North Carolina','Spectrum Center','19,077',1988,'James Borrego');
INSERT INTO "info" VALUES ('Eastern','Southeast','Miami Heat','Miami, Florida','American Airlines Arena','19,600',1988,'Erik Spoelstra');
INSERT INTO "info" VALUES ('Eastern','Southeast','Orlando Magic','Orlando, Florida','Amway Center','18,846',1989,'Steve Clifford');
INSERT INTO "info" VALUES ('Eastern','Southeast','Washington Wizards','Washington, D.C.','Capital One Arena','20,356',1961,'Scott Brooks');
INSERT INTO "info" VALUES ('Western','Northwest','Denver Nuggets','Denver, Colorado','Pepsi Center','19,520',1976,'Michael Malone');
INSERT INTO "info" VALUES ('Western','Northwest','Minnesota Timberwolves','Minneapolis, Minnesota','Target Center','19,356',1989,'Ryan Sanders');
INSERT INTO "info" VALUES ('Western','Northwest','Oklahoma City Thunder','Oklahoma City, Oklahoma','Chesapeake Energy Arena','18,203',1967,'Billy Donovan');
INSERT INTO "info" VALUES ('Western','Northwest','Portland Trail Blazers','Portland, Oregon','Moda Center','19,441',1970,'Terry Stotts');
INSERT INTO "info" VALUES ('Western','Northwest','Utah Jazz','Salt Lake City, Utah','Vivint Smart Home Arena','19,911',1974,'Quin Snyder');
INSERT INTO "info" VALUES ('Western','Pacific','Golden State Warriors','Oakland, California','Oracle Arena','19,596',1946,'Steve Kerr');
INSERT INTO "info" VALUES ('Western','Pacific','Los Angeles Clippers','Los Angeles, California','Staples Center','19,060',1970,'Doc Rivers');
INSERT INTO "info" VALUES ('Western','Pacific','Los Angeles Lakers','Los Angeles, California','Staples Center','18,997',1948,'Frank Vogel');
INSERT INTO "info" VALUES ('Western','Pacific','Phoenix Suns','Phoenix, Arizona','Talking Stick Resort Arena','18,055',1968,'Monte Williams');
INSERT INTO "info" VALUES ('Western','Pacific','Sacramento Kings','Sacramento, California','Golden 1 Center','17,500',1948,'Luke Walton');
INSERT INTO "info" VALUES ('Western','Southwest','Dallas Mavericks','Dallas, Texas','American Airlines Center','19,200',1980,'Rick Carlisle');
INSERT INTO "info" VALUES ('Western','Southwest','Houston Rockets','Houston, Texas','Toyota Center','18,055',1967,'Mike D''Antoni');
INSERT INTO "info" VALUES ('Western','Southwest','Memphis Grizzlies','Memphis, Tennessee','FedExForum','18,119',1995,'Taylor Jennings');
INSERT INTO "info" VALUES ('Western','Southwest','New Orleans Pelicans','New Orleans, Louisiana','Smoothie King Center','16,867',2002,'Alvin Gentry');
INSERT INTO "info" VALUES ('Western','Southwest','San Antonio Spurs','San Antonio, Texas','AT&T Center','18,418',1976,'Gregg Popovich');
INSERT INTO "distances" VALUES ('Atlanta Hawks','State Farm Arena','Charlotte Hornets','Spectrum Center',244.8);
INSERT INTO "distances" VALUES ('Atlanta Hawks','State Farm Arena','Memphis Grizzlies','FedExForum',383.8);
INSERT INTO "distances" VALUES ('Atlanta Hawks','State Farm Arena','New Orleans Pelicans','Smoothie King Center',469.1);
INSERT INTO "distances" VALUES ('Atlanta Hawks','State Farm Arena','Orlando Magic','Amway Center',438.8);
INSERT INTO "distances" VALUES ('Boston Celtics','TD Garden','New York Knicks','Madison Square Garden',215.3);
INSERT INTO "distances" VALUES ('Boston Celtics','TD Garden','Toronto Raptors','Scotiabank Arena',550.0);
INSERT INTO "distances" VALUES ('Brooklyn Nets','Barclays Center','New York Knicks','Madison Square Garden',5.1);
INSERT INTO "distances" VALUES ('Brooklyn Nets','Barclays Center','Philadelphia 76ers','Wells Fargo Center',97.4);
INSERT INTO "distances" VALUES ('Charlotte Hornets','Spectrum Center','Indiana Pacers','Bankers Life Fieldhouse',585.1);
INSERT INTO "distances" VALUES ('Charlotte Hornets','Spectrum Center','Miami Heat','American Airlines Arena',730.9);
INSERT INTO "distances" VALUES ('Charlotte Hornets','Spectrum Center','Washington Wizards','Capital One Arena',402.0);
INSERT INTO "distances" VALUES ('Chicago Bulls','United Center','Detroit Pistons','Little Caesars Arena',282.6);
INSERT INTO "distances" VALUES ('Chicago Bulls','United Center','Indiana Pacers','Bankers Life Fieldhouse',181.6);
INSERT INTO "distances" VALUES ('Chicago Bulls','United Center','Milwaukee Bucks','Fiserv Forum',92.1);
INSERT INTO "distances" VALUES ('Cleveland Cavaliers','Quicken Loans Arena','Detroit Pistons','Little Caesars Arena',164.9);
INSERT INTO "distances" VALUES ('Cleveland Cavaliers','Quicken Loans Arena','Indiana Pacers','Bankers Life Fieldhouse',315.5);
INSERT INTO "distances" VALUES ('Cleveland Cavaliers','Quicken Loans Arena','Philadelphia 76ers','Wells Fargo Center',431.2);
INSERT INTO "distances" VALUES ('Cleveland Cavaliers','Quicken Loans Arena','Washington Wizards','Capital One Arena',371.0);
INSERT INTO "distances" VALUES ('Dallas Mavericks','American Airlines Center','Houston Rockets','Toyota Center',239.8);
INSERT INTO "distances" VALUES ('Dallas Mavericks','American Airlines Center','Oklahoma City Thunder','Chesapeake Energy Arena',206.7);
INSERT INTO "distances" VALUES ('Dallas Mavericks','American Airlines Center','San Antonio Spurs','AT&T Center',273.8);
INSERT INTO "distances" VALUES ('Denver Nuggets','Pepsi Center','Los Angeles Lakers','Staples Center',1016.1);
INSERT INTO "distances" VALUES ('Denver Nuggets','Pepsi Center','Minnesota Timberwolves','Target Center',913.9);
INSERT INTO "distances" VALUES ('Denver Nuggets','Pepsi Center','Oklahoma City Thunder','Chesapeake Energy Arena',679.6);
INSERT INTO "distances" VALUES ('Denver Nuggets','Pepsi Center','Phoenix Suns','Talking Stick Resort Arena',862.4);
INSERT INTO "distances" VALUES ('Denver Nuggets','Pepsi Center','Utah Jazz','Vivint Smart Home Arena',519.1);
INSERT INTO "distances" VALUES ('Detroit Pistons','Little Caesars Arena','Minnesota Timberwolves','Target Center',694.7);
INSERT INTO "distances" VALUES ('Detroit Pistons','Little Caesars Arena','New York Knicks','Madison Square Garden',616.1);
INSERT INTO "distances" VALUES ('Detroit Pistons','Little Caesars Arena','Toronto Raptors','Scotiabank Arena',231.0);
INSERT INTO "distances" VALUES ('Golden State Warriors','Oracle Arena','Los Angeles Lakers','Staples Center',385.1);
INSERT INTO "distances" VALUES ('Golden State Warriors','Oracle Arena','Sacramento Kings','Golden 1 Center',87.9);
INSERT INTO "distances" VALUES ('Houston Rockets','Toyota Center','New Orleans Pelicans','Smoothie King Center',347.7);
INSERT INTO "distances" VALUES ('Houston Rockets','Toyota Center','San Antonio Spurs','AT&T Center',197.4);
INSERT INTO "distances" VALUES ('Los Angeles Clippers','Staples Center','Los Angeles Lakers','Staples Center',0.0);
INSERT INTO "distances" VALUES ('Los Angeles Clippers','Staples Center','Denver Nuggets','Pepsi Center',1016.1);
INSERT INTO "distances" VALUES ('Los Angeles Clippers','Staples Center','Golden State Warriors','Oracle Arena',385.1);
INSERT INTO "distances" VALUES ('Los Angeles Clippers','Staples Center','Phoenix Suns','Talking Stick Resort Arena',373.0);
INSERT INTO "distances" VALUES ('Los Angeles Clippers','Staples Center','Sacramento Kings','Golden 1 Center',388.4);
INSERT INTO "distances" VALUES ('Los Angeles Clippers','Staples Center','Utah Jazz','Vivint Smart Home Arena',688.4);
INSERT INTO "distances" VALUES ('Los Angeles Lakers','Staples Center','Phoenix Suns','Talking Stick Resort Arena',373.0);
INSERT INTO "distances" VALUES ('Los Angeles Lakers','Staples Center','Sacramento Kings','Golden 1 Center',388.4);
INSERT INTO "distances" VALUES ('Los Angeles Lakers','Staples Center','Utah Jazz','Vivint Smart Home Arena',688.4);
INSERT INTO "distances" VALUES ('Memphis Grizzlies','FedExForum','New Orleans Pelicans','Smoothie King Center',395.0);
INSERT INTO "distances" VALUES ('Memphis Grizzlies','FedExForum','Oklahoma City Thunder','Chesapeake Energy Arena',466.0);
INSERT INTO "distances" VALUES ('Miami Heat','American Airlines Arena','New Orleans Pelicans','Smoothie King Center',866.1);
INSERT INTO "distances" VALUES ('Miami Heat','American Airlines Arena','Orlando Magic','Amway Center',235.6);
INSERT INTO "distances" VALUES ('Milwaukee Bucks','Fiserv Forum','Minnesota Timberwolves','Target Center',337.1);
INSERT INTO "distances" VALUES ('Minnesota Timberwolves','Target Center','Portland Trail Blazers','Moda Center',1729.3);
INSERT INTO "distances" VALUES ('Philadelphia 76ers','Wells Fargo Center','Washington Wizards','Capital One Arena',140.0);
INSERT INTO "distances" VALUES ('Portland Trail Blazers','Moda Center','Sacramento Kings','Golden 1 Center',579.7);
INSERT INTO "distances" VALUES ('Portland Trail Blazers','Moda Center','Utah Jazz','Vivint Smart Home Arena',765.5);
INSERT INTO "distances" VALUES ('Toronto Raptors','Scotiabank Arena','New York Knicks','Madison Squalre Garden',491.1);
INSERT INTO "distances" VALUES ('Portland Trail Blazers','Moda Center','Seattle Supersonics','Seattle Stadium',173.8);
INSERT INTO "distances" VALUES ('Sacramento Kings','Golden 1 Center','Seattle Supersonics','Seattle Stadium',752.4);
COMMIT;
