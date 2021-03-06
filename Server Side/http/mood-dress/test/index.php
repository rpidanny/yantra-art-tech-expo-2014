<!doctype html>
<html>
    <head>

        <title>Art-Texh Expo</title>

        <!-- Stylesheet Ressources -->
        <link rel="stylesheet" href="css/global.css">
        <link rel="stylesheet" href="css/bootstrap.min.css">

        <!-- JavaScript Ressources -->
        <script src="js/jquery-1.7.1.min.js" type="text/javascript" charset="utf-8"></script>
        <script src="js/bootstrap.min.js" type="text/javascript" charset="utf-8"></script>
        <script src="js/global.js" type="text/javascript" charset="utf-8"></script>

    <link href="styles/style.css" type="text/css" rel="stylesheet"/>
    <link href="fonts/spheroid/font.css" type="text/css" rel="stylesheet"/>
    <link href="fonts/ARIR/font.css" type="text/css" rel="stylesheet"/>



<script>
$(document).ready(function(){
  $("#button1").click(function(){
    
        $.post("/cgi-bin/yantra3/monitor.py",
        {
          message:"a"

        },
        function(data,status){
         // alert("Data: " + data + "\nStatus: " + status);
         //alert("Turned on");
          $('#currentMood').text("Your Current Mood is Excited");
        });
  });

  $("#button2").click(function(){
    
        $.post("/cgi-bin/yantra3/monitor.py",
        {
          message:"b"
        },
        function(data,status){
         // alert("Data: " + data + "\nStatus: " + status);
        // alert("Turned on");
          $('#currentMood').text("Your Current Mood is Spongey");
        });
    
  });

    $("#button3").click(function(){
    
        $.post("/cgi-bin/yantra3/monitor.py",
        {
          message:"c"
        },
        function(data,status){
         // alert("Data: " + data + "\nStatus: " + status);
         //alert("Turned on");
          $('#currentMood').text("Your Current Mood is Happy");
        });
    
  });


    $("#button4").click(function(){
    
            $.post("/cgi-bin/yantra3/monitor.py",
            {
              message:"d"
            },
            function(data,status){
             // alert("Data: " + data + "\nStatus: " + status);
            // alert("Turned on");
            $('#currentMood').text("Your Current Mood is Worried");
            });
    
  });

});
</script>



    </head>

    <body>

        <!-- Modal Connection -->
        <div class="modal hide fade" id="ModalConnection">

            <div class="modal-header">
              <h3>Login</h3>
            </div>

            <div class="modal-body">
              <div class="control-group">
                <label>Name :</label>
                <input id="nickname" type="text" class="span2">
                <span class="help-inline hide">Not empty !</span>
              </div>
            </div>

            <div class="modal-footer">
            <button id="loginSub" class="btn btn-primary">Login</button>
            </div>

        </div>
        <!-- End of the Modal Connection -->

        <!-- Modal About -->
        <div class="modal hide fade" id="ModalAbout">

            <div class="modal-header">
              <h3>About Project</h3>
            </div>

            <div class="modal-body">
              <blockquote>
                <p align="justify">About Project Here</p>
                <p align="justify">More About</p>
                <small class="pull-right">Project blah blah</small>
              </blockquote>
            </div>

            <div class="modal-footer">
            <button id="close" class="btn btn-primary">Close</button>
            <a class="btn btn-small btn-info" target="_blank" href="https://github.com/rpidanny/">
            <i class="icon-info-sign icon-white"></i>More Info</a>
            </div>

        </div>
        <!-- End of the Modal About -->

        <!-- Navbar -->
        <div class="navbar navbar-fixed-top">
          <div class="navbar-inner">
            <div class="container-fluid">
              <a class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse">
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
              </a>
              <a class="brand" href="./index.php">Art-Tech Expo</a>
              <div class="nav-collapse">
                <ul class="nav">
                  <li class="active"><a href="./index.php">Home</a></li>
                  <li><a href="https://www.facebook.com/tsukuyomi" target="_blank">Facebook</a></li>
                  <li><a href="http://rpidanny.github.io" target="_blank">About Me</a></li>
                  <li><span id="about" class="about">About Project</span></li>
                </ul>
                <p class="navbar-text pull-right">Logged in as <a id="username" href="#">username</a></p>
              </div>
            </div>
          </div>
        </div>
        <!-- End of the Navbar -->

        <!-- Content -->
        <div class="container-fluid">

              <div class="container" id="wrapper">
                    <h1 class="fontsforweb_fontid_15812">Welcome</h1>
                    <p>How are you feeling rght now?</p>
                                                                                                    
                    <div class="btnTable">          
                    <table>
                      <thead>
                        <tr>
                          <th ><div id="button1"><img src="images/emotions/excited.png" class="img-responsive" alt="Cinque Terre" width="204" > </div></th>
                          <th><div id="button2"><img src="images/emotions/smiley.png" class="img-responsive" alt="Cinque Terre" width="204"></div> </th>
                        </tr>
                      </thead>
                      <tbody>
                        <tr>
                          <td><div id="button3"><img src="images/emotions/happy.png" class="img-responsive" alt="Cinque Terre" width="204"></div></td>
                          <td><div id="button4"><img src="images/emotions/worried.png" class="img-responsive" alt="Cinque Terre" width="204"></div></td>
                        </tr>
                       
                      </tbody>
                    </table>
                    </div>
                    <p id="currentMood">
                        
                    </p>

            <!-- Statut of the visio call -->
            <div id="footer"></div>

            <hr>

            <!-- Footer -->
            <footer><p>&copy; DannyLabs 2014</p></footer>

            </div>
        </div>
        <!-- End of the Content -->

    </body>
</html>
