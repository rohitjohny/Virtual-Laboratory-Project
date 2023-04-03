
      function execute(){
        var r1 = getElementById("R1").value;
        var r2 = getElementById("R2").value; 
        var r3 = getElementById("R3").value;
        var r4 = getElementById("R4").value;


      } 

      function myCreateFunction() {
        const arr=[data1,data2,data3,data4,data5];    
        for(var i=0;i<5;i++)
        {
          arr[i]=document.getElementById("R"+(i+1)).value;  // users input
        }
        
        /* var data1 = getElementById("R1").value;
        var data2 = getElementById("R2").value; 
        var data3 = getElementById("R3").value;
        var data4 = getElementById("R4").value;
        var data5 = getElementById("R5").value;*/
        if(data1==""||data2==""||data3==""||data4==""||data5=="")
        {
          swal("Fill empty values");return;
        }
        var row=document.createElement("tr");  // create a row 
        for(var i=1;i<=5;i++)
        {
          var data =eval("data"+i);               // data for column
          var cell =document.createElement("td"); // create a cell/ column
          cell.innerHTML=data;
          row.appendChild(cell);  // add cell to row
          document.getElementById("myTable").appendChild(row);
        }
        var cell =document.createElement("td");
        if( r1*r3 == r2*r4) var check="yes";
        else var check="no";
        cell.innerHTML = check;
        document.getElementById("myTable").appendChild(row);
        for (var i = 1; i <= 5; i++) {
                
          document.getElementById("R"+i).value = "";

      }
      }
      
      
      
   
  {const container = document.getElementById("tooltip-container");
  const button = document.getElementById("tooltip-button");
  
  // Create the tooltip element
  const tooltip = document.createElement("div");
  tooltip.style.display = "none";
  tooltip.style.position = "absolute";
  tooltip.style.zIndex="1";
  tooltip.style.margin= "60px -110px 0 0";
  tooltip.style.top="34%";
  tooltip.style.width="2530%"
  tooltip.style.right="80%";
  tooltip.style.backgroundColor ="orange";
  tooltip.style.color = "white";
  tooltip.style.padding = "10px";
  tooltip.style.borderRadius = "3px";
  
  // Show the tooltip when mouse enters the button
  button.addEventListener("mouseenter", (event) => {
    tooltip.innerHTML = "<p> Step 1: Make the proper connection by draging the element from toolbox, as instructed below.If the wire is misplaced, Or wrong element is picked then right click on the element and delete the connection or element</p> <p>Step 2: Click Check button.if connection is correct, an alert appears. Click OK. Now, go to next step.</p><p>Step 3: Check the connection and either deattach the incorrect wire connection or Click on reset button and start from step 1.</p><p>Step 4:Drag 4 reostate from toolbox and place them in rectangle corners and a battery place it at down</p> <p>Step 5:Connect left two reostate to right two reostate.upper and lower mutually  </p> <p>Step 6:Connect battery left terminal to the left two reostate and right two reostate two battery's right terminal.</p><p>Step 7 : Now connect the galvanometer between upper and lower reostate and enter the value of resistace to balance the bridge and then check.  </p> <p> Step 8: Click Add to table button to insert the values in the table.</p><p>Step 9: Follow the procedure from step 6 to step 8, till you have the 5 readings on the table.</p><p>Step 10: After taking minimum 5 readings, click the Graph button.</p> <p> Step 11: Click Print button, to print the full connections with graph and table.</P>";
    tooltip.style.display = "block";
    container.appendChild(tooltip);
  });
  
  // Hide the tooltip when mouse leaves the button
  button.addEventListener("mouseleave", (event) => {
    tooltip.style.display = "none";
  });
  }

  ///////////////////////////For formula  button ///////////////////////////////////////

function formula() {
    var x = document.getElementById("myDIV");
    if (x.style.display === "none") {
      x.style.display = "block";
    } else {
      x.style.display = "none";
    }
  }
  ///////////////////////////For creating instance of elements from toolbox /////////////////////////////////////////
   