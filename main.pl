#+----------------------------------------------------+
#|    software written by EclipseSpark                |
#|                                                    |
#|              FrozenBox network                     |
#|                         &                          |
#|                       HackerNetwork                |
#|                                                    |
#|      www.frozenbox.tk & www.hackernetwork.tk       |
#|                                                    |
#|this software is under COPYLEFT license             |
#|and you can share, modify and redistribute it       |
#|with the same license citing the originals authors  |
#|and adding your name to this software               |
#+----------------------------------------------------+

use Getopt::Long;

sub usage()
{
   print("building\n");
   exit;
}

my $comprimi=0;
my $formato=0;
my $input=0;
my $output=0;
my $command=0;

GetOptions ('compress|c=s' => sub { $comprimi = 1 }, 'expand|e=s'   => sub { $comprimi = 2 }, 'format|f=s' => \$formato, 'input|source|i|s=s' => \$input, 'output|destination|o|d=s' => \$output);

if($comprimi == 1)
{
   if($formato == "tar")
   {
      $command = "tar cf $output $input";
      print($command);
      system($command);
   }
   elsif($formato == "tar.gz")
   {
      $command = "tar czf $output $input";
      print($command);
      system($command);
   }
   elsif($formato == "tar.bz2")
   {
      $command = "tar cjf $output $input";
      print($command);
      system($command);
   }
   elsif($formato == "gz")
   {
      $command = "gzip $input";
      print($command);
      system($command);
   }
   elsif($formato == "bz")
   {
      $command = "bzip $input";
      print($command);
      system($command);
   }
   else
   {
      print("something went wrong\n");
      usage();
   }
}


if($comprimi == 2)
{
   if($formato == "tar")
   {
      $command = "tar xf $input";
      print($command);
      system($command);
   }
   elsif($formato == "tar.gz")
   {
      $command = "tar xzf $input";
      print($command);
      system($command);
   }
   elsif($formato == "tar.bz2")
   {
      $command = "tar xjf $input";
      print($command);
      system($command);
      
   }
   elsif($formato == "gz")
   {
      $command = "gzip -d $$input";
      print($command);
      system($command);
   }
   elsif($formato == "bz")
   {
      $command = "bzip $input";
      print($command);
      system($command);
   }
   else
   {
      print("something went wrong\n");
      usage();
   }
}
