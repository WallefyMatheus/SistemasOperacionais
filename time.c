#include "types.h"
#include "user.h"
#include "sys/types.h"
#include "time.h"

int stdout = 1;
int stderr = 2;

void
executar(char ** argumento)
{
  if (exec(argumento[1], argumento+1) < 0)
    printf(stderr, "Processo errado! %d\n");
  exit();
}

void 
test_user()
{
  printf(stderr, "USER TESTS INIT!\n");
  printf(stderr, ".\n");
  printf(stderr, ".\n");
  printf(stderr, ".\n");

  int i=0;

  const char * string = "tristique aliquam curabitur ligula curae donec vulputate malesuada pellentesque sem luctus eleifend taciti sit quam quis laoreet congue lacus varius egestas facilisis mollis nam eros commodo tellus morbi dapibus ante pretium nibh aliquam ligula pulvinar sapien integer vitae cursus class curabitur vestibulum etiam cursus aliquet tempus nisl pharetra ornare mauris commodo leo purus suscipit congue eros sed eleifend aliquam primis tristique sollicitudin quam nulla rutrum laoreet sagittis scelerisque quisque pharetra curabitur duis non varius sociosqu odio potenti tristique mauris vel conubia dapibus arcu nec rutrum dictum enim sapien tempus urna leo mattis felis aenean nibh gravida mi cursus porttitor litora habitant luctus feugiat iaculis ante mollis iaculis blandit fringilla tempor hac ipsum sed velit ullamcorper libero nullam suscipit pharetra lorem habitasse purus et non molestie in tempor eros rutrum quis enim senectus torquent risus suscipit aenean aliquam feugiat nulla conubia tincidunt posuere praesent platea luctus pharetra conubia netus vestibulum aliquam nec cursus aliquet commodo dui commodo et libero viverra pharetra viverra massa fames nec arcu nostra cras lorem libero etiam quisque arcu nisl class non tempus vivamus ut tempor lacinia eros aenean condimentum etiam per integer enim tristique lorem accumsan orci malesuada porttitor dui cursus facilisis potenti euismod velit phasellus ut morbi tincidunt aliquet vestibulum orci nibh hendrerit at neque gravida lacinia consectetur torquent netus non aenean faucibus pellentesque elit lacus sollicitudin interdum fusce molestie rutrum lobortis at dictumst vel velit aliquam eleifend vel sollicitudin praesent ligula rhoncus fringilla at pellentesque eros phasellus nam cubilia eleifend nullam et velit fringilla ultrices iaculis torquent elit molestie quisque commodo orci aptent nunc suspendisse nisl diam tristique ac morbi hac a lectus hac torquent at porttitor ligula phasellus tempus sagittis ultricies mauris aptent aliquam vulputate litora fermentum praesent eu arcu torquent vehicula curae morbi senectus duis faucibus sapien pharetra rhoncus diam porttitor odio dapibus eget proin curabitur justo ornare integer morbi auctor aliquet lobortis non et justo hac leo vivamus dui ultricies nisi ullamcorper scelerisque eleifend luctus fermentum magna tortor aliquet sem quisque sollicitudin ipsum tempor duis suspendisse integer quis feugiat enim quis porta phasellus convallis potenti nisl aptent nec congue dictum nibh pellentesque donec etiam tempor mi nisi quam tempus purus commodo metus commodo amet phasellus inceptos ut pretium molestie mollis enim netus habitasse mi donec nibh aliquet laoreet sodales rhoncus amet erat torquent senectus quisque at posuere nam libero condimentum felis blandit cras molestie odio viverra eu consequat laoreet porttitor ultrices donec magna lacinia lacus feugiat ornare ut ipsum massa rhoncus venenatis quis consequat lacus condimentum euismod ut mauris eu iaculis erat dictumst integer vivamus semper vivamus fusce arcu metus ut massa per sapien fusce ligula habitant nam sociosqu himenaeos sed et magna risus feugiat convallis venenatis vel cras hendrerit varius bibendum pulvinar facilisis sed non eros nostra ut torquent fermentum tincidunt lorem potenti lorem vehicula congue ante praesent ultricies tortor etiam ut elit convallis nisi odio ut diam class scelerisque viverra nisi ad litora curae semper curabitur imperdiet mi cras nullam vel dictumst condimentum donec ligula nulla pretium tincidunt eget fames ipsum cras rhoncus torquent dictumst commodo id libero nam donec magna lobortis condimentum commodo elementum porta tristique quam sagittis sollicitudin ante velit eu a etiam aptent tellus egestas dapibus velit aliquet adipiscing habitant duis nibh lectus ac sem eu cras ad pretium fermentum accumsan elit sollicitudin erat ullamcorper fringilla lacus dolor sociosqu convallis condimentum est et ornare phasellus ornare sollicitudin dapibus mollis vehicula himenaeos quam justo dui a iaculis volutpat condimentum duis gravida habitasse quisque lacus justo litora aenean ut nisi blandit suscipit orci augue volutpat sed lorem posuere massa elit commodo cubilia commodo platea blandit maecenas metus nisi eros porta lacus sociosqu enim laoreet pellentesque praesent aliquam eros libero phasellus morbi sapien gravida taciti himenaeos nulla enim arcu est felis senectus metus ut lorem accumsan auctor faucibus sagittis vehicula habitasse iaculis dictum mattis dolor ac dolor eget vehicula purus felis sapien erat elementum molestie turpis laoreet nostra netus fermentum malesuada congue aliquam tellus odio curabitur nisi ad laoreet malesuada dictumst fusce amet himenaeos primis quisque aenean quisque eget ut tincidunt quam risus faucibus tristique ad curabitur adipiscing hendrerit tincidunt tempor sociosqu bibendum vestibulum litora massa sodales aliquet aliquam eros et porta eget facilisis gravida amet aliquam feugiat varius metus lorem malesuada feugiat tellus morbi lacus felis dictum consectetur proin ut vel tincidunt aptent rhoncus libero metus at habitant mauris torquent integer sagittis orci dui porttitor condimentum aenean sociosqu quam vivamus sollicitudin litora eget curae neque per cursus lobortis pellentesque volutpat aliquam magna lobortis placerat malesuada class ut dapibus aenean eleifend ut turpis lorem luctus vehicula ante habitant aenean luctus rhoncus scelerisque eleifend quisque urna donec euismod tempor consequat litora semper blandit sem malesuada nullam sagittis primis interdum leo venenatis dolor lacinia orci iaculis nostra a in massa duis sed curabitur eu adipiscing eu egestas placerat fames iaculis vivamus platea ante ac conubia quis consectetur mauris dictum pulvinar in varius urna bibendum porta commodo amet vehicula massa fringilla netus nulla quisque conubia eleifend ullamcorper faucibus lorem auctor nullam dictumst convallis venenatis eros ante hendrerit tempus a tristique fringilla vestibulum a interdum egestas netus felis ut iaculis eros feugiat rutrum integer fermentum ultrices posuere faucibus senectus accumsan litora blandit litora mauris in mattis blandit ut bibendum etiam lobortis netus facilisis et mollis convallis taciti iaculis viverra nulla quis urna conubia augue ante egestas metus bibendum ornare congue vulputate feugiat ultrices libero interdum sapien massa lobortis nisi iaculis molestie quam varius pulvinar egestas luctus porttitor nostra fames tempor lectus enim dolor donec aliquam aenean donec pharetra nibh consequat at consequat senectus imperdiet faucibus rutrum ornare quam varius curae velit elementum molestie nisi quisque est auctor interdum conubia pharetra odio eros pellentesque in ipsum habitasse blandit imperdiet sociosqu senectus fusce rhoncus lectus proin porta sodales platea dapibus risus elit dui mauris tortor congue iaculis malesuada dapibus fermentum vitae imperdiet scelerisque ullamcorper himenaeos pulvinar justo cursus metus tellus a augue potenti leo vel orci quis facilisis hac conubia in etiam imperdiet conubia neque proin dui accumsan quam quisque habitant ligula elementum dictumst dapibustristique aliquam curabitur ligula curae donec vulputate malesuada pellentesque sem luctus eleifend taciti sit quam quis laoreet congue lacus varius egestas facilisis mollis nam eros commodo tellus morbi dapibus ante pretium nibh aliquam ligula pulvinar sapien integer vitae cursus class curabitur vestibulum etiam cursus aliquet tempus nisl pharetra ornare mauris commodo leo purus suscipit congue eros sed eleifend aliquam primis tristique sollicitudin quam nulla rutrum laoreet sagittis scelerisque quisque pharetra curabitur duis non varius sociosqu odio potenti tristique mauris vel conubia dapibus arcu nec rutrum dictum enim sapien tempus urna leo mattis felis aenean nibh gravida mi cursus porttitor litora habitant luctus feugiat iaculis ante mollis iaculis blandit fringilla tempor hac ipsum sed velit ullamcorper libero nullam suscipit pharetra lorem habitasse purus et non molestie in tempor eros rutrum quis enim senectus torquent risus suscipit aenean aliquam feugiat nulla conubia tincidunt posuere praesent platea luctus pharetra conubia netus vestibulum aliquam nec cursus aliquet commodo dui commodo et libero viverra pharetra viverra massa fames nec arcu nostra cras lorem libero etiam quisque arcu nisl class non tempus vivamus ut tempor lacinia eros aenean condimentum etiam per integer enim tristique lorem accumsan orci malesuada porttitor dui cursus facilisis potenti euismod velit phasellus ut morbi tincidunt aliquet vestibulum orci nibh hendrerit at neque gravida lacinia consectetur torquent netus non aenean faucibus pellentesque elit lacus sollicitudin interdum fusce molestie rutrum lobortis at dictumst vel velit aliquam eleifend vel sollicitudin praesent ligula rhoncus fringilla at pellentesque eros phasellus nam cubilia eleifend nullam et velit fringilla ultrices iaculis torquent elit molestie quisque commodo orci aptent nunc suspendisse nisl diam tristique ac morbi hac a lectus hac torquent at porttitor ligula phasellus tempus sagittis ultricies mauris aptent aliquam vulputate litora fermentum praesent eu arcu torquent vehicula curae morbi senectus duis faucibus sapien pharetra rhoncus diam porttitor odio dapibus eget proin curabitur justo ornare integer morbi auctor aliquet lobortis non et justo hac leo vivamus dui ultricies nisi ullamcorper scelerisque eleifend luctus fermentum magna tortor aliquet sem quisque sollicitudin ipsum tempor duis suspendisse integer quis feugiat enim quis porta phasellus convallis potenti nisl aptent nec congue dictum nibh pellentesque donec etiam tempor mi nisi quam tempus purus commodo metus commodo amet phasellus inceptos ut pretium molestie mollis enim netus habitasse mi donec nibh aliquet laoreet sodales rhoncus amet erat torquent senectus quisque at posuere nam libero condimentum felis blandit cras molestie odio viverra eu consequat laoreet porttitor ultrices donec magna lacinia lacus feugiat ornare ut ipsum massa rhoncus venenatis quis consequat lacus condimentum euismod ut mauris eu iaculis erat dictumst integer vivamus semper vivamus fusce arcu metus ut massa per sapien fusce ligula habitant nam sociosqu himenaeos sed et magna risus feugiat convallis venenatis vel cras hendrerit varius bibendum pulvinar facilisis sed non eros nostra ut torquent fermentum tincidunt lorem potenti lorem vehicula congue ante praesent ultricies tortor etiam ut elit convallis nisi odio ut diam class scelerisque viverra nisi ad litora curae semper curabitur imperdiet mi cras nullam vel dictumst condimentum donec ligula nulla pretium tincidunt eget fames ipsum cras rhoncus torquent dictumst commodo id libero nam donec magna lobortis condimentum commodo elementum porta tristique quam sagittis sollicitudin ante velit eu a etiam aptent tellus egestas dapibus velit aliquet adipiscing habitant duis nibh lectus ac sem eu cras ad pretium fermentum accumsan elit sollicitudin erat ullamcorper fringilla lacus dolor sociosqu convallis condimentum est et ornare phasellus ornare sollicitudin dapibus mollis vehicula himenaeos quam justo dui a iaculis volutpat condimentum duis gravida habitasse quisque lacus justo litora aenean ut nisi blandit suscipit orci augue volutpat sed lorem posuere massa elit commodo cubilia commodo platea blandit maecenas metus nisi eros porta lacus sociosqu enim laoreet pellentesque praesent aliquam eros libero phasellus morbi sapien gravida taciti himenaeos nulla enim arcu est felis senectus metus ut lorem accumsan auctor faucibus sagittis vehicula habitasse iaculis dictum mattis dolor ac dolor eget vehicula purus felis sapien erat elementum molestie turpis laoreet nostra netus fermentum malesuada congue aliquam tellus odio curabitur nisi ad laoreet malesuada dictumst fusce amet himenaeos primis quisque aenean quisque eget ut tincidunt quam risus faucibus tristique ad curabitur adipiscing hendrerit tincidunt tempor sociosqu bibendum vestibulum litora massa sodales aliquet aliquam eros et porta eget facilisis gravida amet aliquam feugiat varius metus lorem malesuada feugiat tellus morbi lacus felis dictum consectetur proin ut vel tincidunt aptent rhoncus libero metus at habitant mauris torquent integer sagittis orci dui porttitor condimentum aenean sociosqu quam vivamus sollicitudin litora eget curae neque per cursus lobortis pellentesque volutpat aliquam magna lobortis placerat malesuada class ut dapibus aenean eleifend ut turpis lorem luctus vehicula ante habitant aenean luctus rhoncus scelerisque eleifend quisque urna donec euismod tempor consequat litora semper blandit sem malesuada nullam sagittis primis interdum leo venenatis dolor lacinia orci iaculis nostra a in massa duis sed curabitur eu adipiscing eu egestas placerat fames iaculis vivamus platea ante ac conubia quis consectetur mauris dictum pulvinar in varius urna bibendum porta commodo amet vehicula massa fringilla netus nulla quisque conubia eleifend ullamcorper faucibus lorem auctor nullam dictumst convallis venenatis eros ante hendrerit tempus a tristique fringilla vestibulum a interdum egestas netus felis ut iaculis eros feugiat rutrum integer fermentum ultrices posuere faucibus senectus accumsan litora blandit litora mauris in mattis blandit ut bibendum etiam lobortis netus facilisis et mollis convallis taciti iaculis viverra nulla quis urna conubia augue ante egestas metus bibendum ornare congue vulputate feugiat ultrices libero interdum sapien massa lobortis nisi iaculis molestie quam varius pulvinar egestas luctus porttitor nostra fames tempor lectus enim dolor donec aliquam aenean donec pharetra nibh consequat at consequat senectus imperdiet faucibus rutrum ornare quam varius curae velit elementum molestie nisi quisque est auctor interdum conubia pharetra odio eros pellentesque in ipsum habitasse blandit imperdiet sociosqu senectus fusce rhoncus lectus proin porta sodales platea dapibus risus elit dui mauris tortor congue iaculis malesuada dapibus fermentum vitae imperdiet scelerisque ullamcorper himenaeos pulvinar justo cursus metus tellus a augue potenti leo vel orci quis facilisis hac conubia in etiam imperdiet conubia neque proin dui accumsan quam quisque habitant ligula elementum dictumst dapibus";
  
  for(i=0;i<1000000;i++){
      strcmp(string,string);
      strlen(string);
  }
  printf(stderr, "USER TESTS FINISH!\n");

}

int 
realtime()
{
  return uptime();
}

int 
usertime() 
{
  return user_time;
}

int 
systemtime() 
{
  return time();
}

int
main(int argc, char *argv[])
{
    int sys, user, real;
    int real_a, user_a, sys_a;
    int real_b, user_b, sys_b;

    real_a = realtime();
    user_a = usertime();
    sys_a = systemtime();

    pid_t pid = fork();

    if (pid < 0) {
      printf(stderr, "Fork falhou!\n");
      exit();
    }
    else if (pid == 0){
      executar(argv);
    }

    wait();

    // Rotina para chamadas de usuário
    test_user();

    //Obtém o acumulado ao término da execução do programa
    real_b = realtime();
    user_b = usertime();
    sys_b = systemtime();
    
    real = (real_b - real_a);
    user = (user_b - user_a);
    sys = (sys_b - sys_a);

    printf(stderr, "\n");
    printf(stderr, " ---------------------------------------- \n");
    printf(stderr, "\n");
    printf(stderr, "real\t%dm%d.%ds\n", real/6000, (real%6000)/100, real%100);
    printf(stderr, "user\t%dm%d.%ds\n", user/6000, (user%6000)/100, user%100);
    printf(stderr, "sys\t%dm%d.%ds\n", sys/6000, (sys%6000)/100, sys%100);
    
    exit();
}

