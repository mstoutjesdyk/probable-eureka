# Manage Models

!!! warning ""

    ![](img/nav-us/database-model.png)
    
<span style="color:#00008B";>List Avaliable Models</span> This button initiates population of the list of models from the designated source.

<span style="color:#00008B";>Create New Model</span> This button designates that the model to be specified and used by the caller in new. 

<span style="color:#00008B";>Manage Components</span> This button brings up a Model Components Dialog in which the model components and their properties can be specified.

!!! warning "Model Components"

    ![](img/nav-us/database-modelcomp.png){width="textwidth"}
    
    <span style="color:#00008B";>Analyte Description</span> Enter in the text box the name to be given to the newly created analyte or the new name to be given to a currently selected analyte.
    
    <span style="color:#00008B";>Vbar at 20 C (ml/g)</span> Enter the vbar value at 20 degrees Centigrade.
    
    <span style="color:#00008B";>Extinction/Wavelength</span> Enter the extinction value for the read-only-displayed wavelength.

    <span style="color:#00008B";>Molar Concentration</span> Read-only molar concentration calculated from Extinction and Signal Concentration.
    
    <span style="color:#00008B";>Signal Concentration</span> Enter the analyte's signal concentration value.
    
    Exactly 2 of the 5 component parameters (molecular weight/oligomer, frictional ratio, sedimentation coefficient, diffusion coefficient, and frictional coefficient) should be checked and their values possibly modified. Values of the unchecked parameters are calculated from the two selected.
    
    <span style="color:#00008B";>Simulate s and D</span> This will bring up a shape dialog that uses axial ratios to [model s, D, and f, from MW for 4 basic shapes](/probable-eureka/sim-modelsdf).
    
    <span style="color:#00008B";>Shape</span> Select from the drop-down menu the shape of your solute: sphere, prolate ellipsoid, oblate ellipsoid, or rod. 
    
    <span style="color:#00008B";>Conc. Dependency of s ($\sigma$)</span>
    
    <span style="color:#00008B";>Conc. Dependency of D ($\sigma$)</span>
    
    <span style="color:#00008B";>Load C0 from File</span> Click this button to begin an input file dialog in which you can specify a file with first-scan concentration values.
    
    <span style="color:#00008B";>Co-Sedimenting Solute</span> Check this box to specify that the current component is a co-sedimenting solute.
   
    <span style="color:#00008B";></span>

<span style="color:#00008B";>Manage Associations</span> This button brings up a Model Associations Dialog in which the model associations and their properties can be specified.

!!! warning "Model Associations"

    In this dialog, you can define reversible associations of model components. Associations are constructed in terms of chemical equations with one or two analytes on one side and a product on the other.
    
    Each association row is built by dragging a model component in the upper list to an Analyte or Product cell.As each analyte is dropped, its code letter (A, B, C, ...) appears in the cell with a subscript that represents the oligomer number of the molecule. At least one Analyte and one Product cell must be thus populated. The implied chemical equation must be balanced by setting the stoichiometry counter in each cell such that stoichiometry times oligomer value(s) on the left equals the product of stoichiometry and oligomer on the right. K_association and K_off Rate values should be entered for each row.
    
    Once all association rows have been validly built, click the Accept button to set the reversible association parameters for the model. If a row is wrong and cannot be easily corrected, click the "D" button on the left side of the row to delete that row so that it can be rebuilt.
            
    ![](img/nav-us/database-modelass.png){width="800"}
      
    
    <span style="color:#00008B";>Analyte List</span> The upper list of model components is populated from the model passed by the calling object. Members of this list can be dragged to the table below to construct association equations.
    
    <span style="color:#00008B";>Chemical Equation Associations Table</span> A table with one or more rows is constructed to represent the reversible associations present in the model.
    
    <span style="color:#00008B";>Analyte 1</span> Each row for an association must have this column populated by dragging and dropping a list component. Analyte 2 is optional.
    
    <span style="color:#00008B";>Product</span> Each row for an association must have this column populated by dragging and dropping a list component. Like the Analyte cell(s), a component will be represented by its code letter and a subscript showing its oligomer number. The stoichiometry counter should be set so stoichiometry-time-oligomer balances on the sides of the equation.
    
    <span style="color:#00008B";>K_association</span> Enter the K_association in molar units for each association row.
    
    <span style="color:#00008B";>K_off Rate</span> Enter the K_off Rate value in reciprocal seconds for each association row.
    
    If you click the <span style="color:#00008B";>Accept</span> button and the equation does not balance, a dialog informing you of this imbalance will appear. Correct the equation and try again.

<span style="color:#00008B";>Wavelength</span> Specify the model wavelength value here.

<span style="color:#00008B";>Optical System</span> Select the model optical system: absorbance, interference, or fluorescence.